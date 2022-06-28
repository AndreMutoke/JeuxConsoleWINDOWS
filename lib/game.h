#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <conio.h>

#include "min_to_max.h"
#include "menu.h"

enum movement
{
    HAUT, BAS, GAUCHE, DROITE
};
typedef enum movement movement;
void updateGameScreen(Pixel *Ecran, int ligne, int colonne)
{
    system("cls");
    showEcranprinting(Ecran, ligne, colonne);
}
void games(Pixel *Ecran, int ligne, int colonne)
{
    char touches = getch();
    touches = min_to_max(touches);
    switch(touches)
    {
    case 'I' :
        mouvement(Ecran, ligne, colonne, HAUT);
        break;
    case 'J':
        mouvement(Ecran, ligne, colonne, GAUCHE);
        break;
    case 'K':
        mouvement(Ecran, ligne, colonne, BAS);
        break;
    case 'L':
        mouvement(Ecran, ligne, colonne, DROITE);
        break;
    case 'Q':
        system("cls");
        menu(Ecran, ligne, colonne);
        break;
    default:
        system("pause");
        games(Ecran, ligne, colonne);
    }
}

void mouvement(Pixel *Ecran, int ligne, int colonne, movement mouve)
{
    Pixel screenActuel, screenHaut, screenBas, screenGauche, screenDroite;
    int pas;
    if(mouve == HAUT)
    {
        for(int i=0; i<ligne; i++)
        {
            for(int j=0; j<colonne; j++)
            {
                screenActuel = *(Ecran+i*colonne+j);
                if(screenActuel.etat == USER)
                {
                    pas = i-1;
                    screenHaut = *(Ecran+pas*colonne+j);
                    if(screenHaut.etat == VIDE)
                    {
                        *(Ecran+i*colonne+j) = screenHaut;
                        *(Ecran+pas*colonne+j) = screenActuel;
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                }
            }
        }
    }
    else if(mouve == BAS)
    {
        for(int i=0; i<ligne; i++)
        {
            for(int j=0; j<colonne; j++)
            {
                screenActuel = *(Ecran+i*colonne+j);
                if(screenActuel.etat == USER)
                {
                    pas = i+1;
                    screenBas = *(Ecran+pas*colonne+j);
                    if(screenBas.etat == VIDE)
                    {
                        *(Ecran+i*colonne+j) = screenBas;
                        *(Ecran+pas*colonne+j) = screenActuel;
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                }
            }
        }
    }
    else if(mouve == GAUCHE)
    {
        for(int i=0; i<ligne; i++)
        {
            for(int j=0; j<colonne; j++)
            {
                screenActuel = *(Ecran+i*colonne+j);
                if(screenActuel.etat == USER)
                {
                    pas = j-1;
                    screenGauche = *(Ecran+i*colonne+pas);
                    if(screenGauche.etat == VIDE)
                    {
                        *(Ecran+i*colonne+j) = screenGauche;
                        *(Ecran+i*colonne+pas) = screenActuel;
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                }
            }
        }
    }
    else
    {
        for(int i=0; i<ligne; i++)
        {
            for(int j=0; j<colonne; j++)
            {
                screenActuel = *(Ecran+i*colonne+j);
                if(screenActuel.etat == USER)
                {
                    pas = j+1;
                    screenDroite = *(Ecran+i*colonne+pas);
                    if(screenDroite.etat == VIDE)
                    {
                        *(Ecran+i*colonne+j) = screenDroite;
                        *(Ecran+i*colonne+pas) = screenActuel;
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        games(Ecran, ligne, colonne);
                    }
                }
            }
        }
    }
}
void game(Pixel *Ecran, int ligne, int colonne)
{
    char touches = getch();
    touches = min_to_max(touches);
    switch(touches)
    {
    case 'I' :
        mouvement(Ecran, ligne, colonne, HAUT);
        break;
    case 'J':
        mouvement(Ecran, ligne, colonne, GAUCHE);
        break;
    case 'K':
        mouvement(Ecran, ligne, colonne, BAS);
        break;
    case 'L':
        mouvement(Ecran, ligne, colonne, DROITE);
        break;
    case 'Q':
        system("cls");
        menu(Ecran, ligne, colonne);
        break;
    default:
        system("pause");
        game(Ecran, ligne, colonne);
    }
}

#endif // GAME_H_INCLUDED
