#include "niveau.h"
#include <windows.h>
#include "blocks.h"
#include "screen.h"

Pixel initNiveau1(Pixel Ecran, int i, int j, Etat state)
{
    Pixel screen = Ecran;
    screen.etat = state;
    screen.x = j;
    screen.y = i;
    return screen;
}
void initNiveau2(Pixel *Ecran, int ligne, int colonne)
{

}
void initNiveau3(Pixel *Ecran, int ligne, int colonne)
{

}

void on_level_of(Pixel *Ecran, int ligne, int colonne, niveau level)
{
    switch(level)
    {
    case DEBUTANT:
        for(int i=0; i<ligne; i++)
        {
            for(int j=0; j<colonne; j++)
            {
                if(i==0)
                {
                    if(j>=5 && j<=9)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                }
                else if(i==1)
                {
                    if(j==5 || j==9)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                }
                else if(i==2)
                {
                    if(j==5 || j==9)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                    *(Ecran+i*colonne+6) = initNiveau1(*(Ecran+i*colonne+6), i, 6, CAISSES);
                }
                else if(i==3)
                {
                    if((j>=3 && j<=5) || j==9 || j==10)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                    *(Ecran+i*colonne+8) = initNiveau1(*(Ecran+i*colonne+8), i, 8, CAISSES);
                }
                else if(i==4)
                {
                    if(j==3 || j==10)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                    *(Ecran+i*colonne+6) = initNiveau1(*(Ecran+i*colonne+6), i, 6, CAISSES);
                    *(Ecran+i*colonne+8) = initNiveau1(*(Ecran+i*colonne+8), i, 8, CAISSES);
                }
                else if(i==5)
                {
                    if((j>=1 &&j<=3) || j==5 || j==7 || j==8 || j==10 || (j>=14 && j<=19))
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                }
                else if(i==6)
                {
                    if(j==1 || j==5 || j==7 || j==8 || (j>=10 && j<=14) || j==19)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                    *(Ecran+i*colonne+17) = initNiveau1(*(Ecran+i*colonne+17), i, 17, OBJECTIF);
                    *(Ecran+i*colonne+18) = initNiveau1(*(Ecran+i*colonne+18), i, 18, OBJECTIF);
                }
                else if(i==7)
                {
                    if(j==1 || j==19)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                    *(Ecran+i*colonne+17) = initNiveau1(*(Ecran+i*colonne+17), i, 17, OBJECTIF);
                    *(Ecran+i*colonne+18) = initNiveau1(*(Ecran+i*colonne+18), i, 18, OBJECTIF);
                    *(Ecran+i*colonne+4) = initNiveau1(*(Ecran+i*colonne+4), i, 4, CAISSES);
                    *(Ecran+i*colonne+7) = initNiveau1(*(Ecran+i*colonne+7), i, 6, CAISSES);
                }
                else if(i==8)
                {
                    if((j>=1 && j<=5) || (j>=7 && j<=9) || j==11 || j==13 || j==14 || j==19)
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                    *(Ecran+i*colonne+12) = initNiveau1(*(Ecran+i*colonne+12), i, 12, USER);
                    *(Ecran+i*colonne+17) = initNiveau1(*(Ecran+i*colonne+17), i, 17, OBJECTIF);
                    *(Ecran+i*colonne+18) = initNiveau1(*(Ecran+i*colonne+18), i, 18, OBJECTIF);
                }
                else if(i==9)
                {
                    if(j==5 || (j>=11 && j<=19))
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                }
                else if(i==10)
                {
                    if((j>=5 && j<=11))
                    {
                        *(Ecran+i*colonne+j) = initNiveau1(*(Ecran+i*colonne+j), i, j, BRIQUES);
                    }
                }
            }
        }
        break;
    case MOYEN :

        break;
    case EXPERT :

        break;
    }
}
