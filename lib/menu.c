#include "menu.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#include "blocks.h"
#include "screen.h"
#include "niveau.h"
#include "game.h"

#define MAXLINE 13
#define MAXCOL 21

int choice(Pixel *Ecran, int ligne, int colonne)
{
    int choix;
    initEcran(Ecran, ligne, colonne);
    showEcranprinting(Ecran, ligne, colonne);
    printf("\n#######################\n");
    printf("##  CONSOLE SOKOBAN  ##\n");
    printf("#######################\n");
    printf("1. Jouer \n");
    printf("2. A propos de l'auteur\n");
    printf("0. Quitter\n");
    printf(">> ");
    scanf("%d", &choix);
    while(choix<0 || choix>2)
    {
        system("cls");
        initEcran(Ecran, ligne, colonne);
        showEcranprinting(Ecran, ligne, colonne);
        printf("\n#######################\n");
        printf("##  CONSOLE SOKOBAN  ##\n");
        printf("#######################\n");
        printf("1. Jouer \n");
        printf("2. A propos de l'auteur\n");
        printf("0. Quitter\n");
        printf(">> ");
        scanf("%d", &choix);
    }
    return choix;
}
int choixNiveau(Pixel *Ecran, int ligne, int colonne)
{
    system("cls");
    int choix;
    initEcran(Ecran, ligne, colonne);
    showEcranprinting(Ecran, ligne, colonne);
    printf("\n#######################\n");
    printf("##  CONSOLE SOKOBAN  ##\n");
    printf("#######################\n");
    printf("1. DEBUTANT \n");
    printf("2. MOYEN\n");
    printf("3. EXPERT\n");
    printf("0. Retour\n");
    printf(">> ");
    scanf("%d", &choix);
    while(choix<0 || choix>2)
    {
        system("cls");
        initEcran(Ecran, ligne, colonne);
        showEcranprinting(Ecran, ligne, colonne);
        printf("\n#######################\n");
        printf("##  CONSOLE SOKOBAN  ##\n");
        printf("#######################\n");
        printf("1. DEBUTANT \n");
        printf("2. MOYEN\n");
        printf("3. EXPERT\n");
        printf("0. Retour\n");
        printf(">> ");
        scanf("%d", &choix);
    }
    return choix;
}

void level1(Pixel *Ecran, int ligne, int colonne)
{
    on_level_of(Ecran, ligne, colonne, DEBUTANT);
    showEcranprinting(Ecran, ligne, colonne);
    printf("\n");
    game(Ecran, ligne, colonne);
}

void menu(Pixel *Ecran, int ligne, int colonne)
{
    switch(choice(Ecran, ligne, colonne))
    {
    case QUITTER :
        return;
        break;
    case JOUER :
        switch(choixNiveau(Ecran, ligne, colonne))
        {
        case RETOUR :
            system("cls");
            menu(Ecran, ligne, colonne);
            break;
        case NIVEAU1 :
            system("cls");
            level1(Ecran, ligne, colonne);
            break;
        case NIVEAU2:
            on_level_of(Ecran, ligne, colonne, MOYEN);
            break;
        case NIVEAU3:
            on_level_of(Ecran, ligne, colonne, EXPERT);
            break;
        }
        break;
    case PROPOS :

        break;
    }
}
