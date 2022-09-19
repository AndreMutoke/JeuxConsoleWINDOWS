#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <conio.h>
#define NOMBRE_OBJECTIF_NIVEAU_1 6

#include "min_to_max.h"
#include "screen.h"
#include "menu.h"
#include <stdbool.h>

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

void mouvement(Pixel *Ecran, int ligne, int colonne, movement mouve)
{
    Pixel screenActuel, screenHaut, screenBas, screenGauche, screenDroite, screenHaut2, screenBas2, screenGauche2, screenDroite2;
    int pas, pas2;


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
                        game(Ecran, ligne, colonne);
                    }
                    else if(screenHaut.etat == CAISSES)
                    {
                        pas2 = i-2;
                        screenHaut2 = *(Ecran+pas2*colonne+j);

                        if(screenHaut2.etat == VIDE)
                        {
                            *(Ecran+pas2*colonne+j) = screenHaut;
                            *(Ecran+pas*colonne+j) = screenActuel;
                            *(Ecran+i*colonne+j) = screenHaut2;
                            updateGameScreen(Ecran, ligne, colonne);
                            game(Ecran, ligne, colonne);

                        }
                        else
                        {
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);
                        }

                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        game(Ecran, ligne, colonne);
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
                        game(Ecran, ligne, colonne);
                    }
                    else if(screenBas.etat == CAISSES)
                    {
                        pas2 = i+2;
                        screenBas2 = *(Ecran+pas2*colonne+j);
                        if(screenBas2.etat == VIDE)
                        {

                            *(Ecran+pas2*colonne+j) = screenBas;// Ecran[pas2][j]
                            *(Ecran+pas*colonne+j) = screenActuel;
                            *(Ecran+i*colonne+j) = screenBas2;
                            updateGameScreen(Ecran, ligne, colonne);
                            game(Ecran, ligne, colonne);

                        }
                        else
                        {
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);
                        }

                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        game(Ecran, ligne, colonne);
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
                        game(Ecran, ligne, colonne);
                    }
                    else if(screenGauche.etat == CAISSES)
                    {
                        pas2 = j-2;
                        screenGauche2 = *(Ecran+i*colonne+pas2);
                        if(screenGauche2.etat == VIDE)
                        {
                            *(Ecran+i*colonne+pas2) = screenGauche;
                            *(Ecran+i*colonne+pas) = screenActuel;
                            *(Ecran+i*colonne+j) = screenGauche2;
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);

                        }
                        else
                        {
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);
                        }
                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        game(Ecran, ligne, colonne);
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
                        game(Ecran, ligne, colonne);
                    }
                    else if(screenDroite.etat == CAISSES)
                    {
                        pas2 = j+2;
                        screenDroite2 = *(Ecran+i*colonne+pas2);
                        if(screenDroite2.etat == VIDE)
                        {
                            *(Ecran+i*colonne+pas2) = screenDroite;
                            *(Ecran+i*colonne+pas) = screenActuel;
                            *(Ecran+i*colonne+j) = screenDroite2;
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);

                        }
                        else if(screenDroite2.etat == OBJECTIF)
                        {
                            screenDroite.etat = OK;
                            *(Ecran+i*colonne+pas2) = screenDroite;
                            *(Ecran+i*colonne+pas) = screenActuel;
                            *(Ecran+i*colonne+j) = screenDroite2;
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);

                        }
                        else if(screenDroite2.etat == OK)
                        {
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);
                        }
                        else
                        {
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);
                        }
                    }

                    else if(screenDroite.etat == OK)
                    {
                        pas2 = j+2;
                        screenDroite2 = *(Ecran+i*colonne+pas2);
                        if(screenDroite2.etat == OBJECTIF)
                        {
                            screenDroite2.etat = VIDE;
                            *(Ecran+i*colonne+pas2) = screenDroite;
                            *(Ecran+i*colonne+pas) = screenActuel;
                            *(Ecran+i*colonne+j) = screenDroite2;
                            updateGameScreen(Ecran, ligne, colonne);
                            printf("\n");
                            game(Ecran, ligne, colonne);
                        }

                    }
                    else
                    {
                        updateGameScreen(Ecran, ligne, colonne);
                        printf("\n");
                        game(Ecran, ligne, colonne);
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
