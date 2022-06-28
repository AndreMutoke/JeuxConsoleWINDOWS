#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "blocks.h"
#include "screen.h"
#include "niveau.h"
enum ChoicesOptions
{
    QUITTER, JOUER, PROPOS
};
typedef enum ChoicesOptions ChoicesOptions;
enum ChoiceLevel
{
    RETOUR, NIVEAU1, NIVEAU2, NIVEAU3
};
typedef enum ChoiceLevel ChoiceLevel;

int choice(Pixel *Ecran, int ligne, int colonne);
int choixNiveau(Pixel *Ecran, int ligne, int colonne);

void level1(Pixel *Ecran, int ligne, int colonne);
void level2(Pixel *Ecran, int ligne, int colonne);
void level3(Pixel *Ecran, int ligne, int colonne);

void menu(Pixel *Ecran, int ligne, int colonne);
#endif // MENU_H_INCLUDED
