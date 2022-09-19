#include "screen.h"
#include "blocks.h"
#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>

Pixel initScreen(Pixel Ecran, int x, int y, Etat state)
{
    Ecran.x = y; Ecran.y = x; Ecran.etat = state;
    return Ecran;
}

Etat pixelEtat(Pixel Ecran)
{
    return Ecran.etat;
}
int pixelXPosition(Pixel Ecran)
{
    return Ecran.x;
}
int pixelYPOsition(Pixel Ecran)
{
    return Ecran.y;
}

Pixel setPixelEtatXPositionYPosition(Pixel Ecran, Etat state, int xpos, int ypos)
{
    Ecran.etat = state;
    Ecran.x = xpos;
    Ecran.y = ypos;
    return Ecran;
}

void initEcran(Pixel *Ecran, int ligne, int colonne)
{
    for(int i=0; i<ligne; i++)
    {
        for(int j=0; j<colonne; j++)
        {
            if(i==0 || i==ligne-1)
            {
                *(Ecran+i*colonne+j) = initScreen(*(Ecran+i*colonne+j), j, i, VIDE);
            }
            else
            {
                if(j==0 || j==colonne-1)
                {
                    *(Ecran+i*colonne+j) = initScreen(*(Ecran+i*colonne+j), j, i, VIDE);
                }
                else
                {
                    *(Ecran+i*colonne+j) = initScreen(*(Ecran+i*colonne+j), j, i, VIDE);
                }
            }
        }
    }
}
void printEcran(Etat state)
{
    switch(state)
    {
    case VIDE:
        spaceZone();
        break;
    case BRIQUES :
        briqueZone();
        break;
    case CAISSES:
        caisseZone();
        break;
    case USER :
        userZone();
        break;
    case OBJECTIF:
        objectifZone();
        break;
    case OK :
        okZone();
        break;
    case CADRE:
        cadreZone();
        break;
    }
}
void showEcranprinting(Pixel *Ecran, int ligne, int colonne)
{
    printf("--");
    for(int i=0; i<colonne; i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i=0; i<ligne; i++)
    {
        printf("|");
        for(int j=0; j<colonne; j++)
        {
            if(j== colonne-1)
            {
                printEcran(pixelEtat(*(Ecran+i*colonne+j)));
                printf("|\n");
            }else
            {
                printEcran(pixelEtat(*(Ecran+i*colonne+j)));
            }

        }
    }
    printf("--");
    for(int i=0; i<colonne; i++)
    {
        printf("-");
    }
}

