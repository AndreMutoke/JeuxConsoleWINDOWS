#ifndef NIVEAU_H_INCLUDED
#define NIVEAU_H_INCLUDED
#include <windows.h>
#include "blocks.h"
#include "screen.h"
enum niveau
{
    DEBUTANT, MOYEN, EXPERT
};
typedef enum niveau niveau;
Pixel initNiveau1(Pixel Ecran, int i, int j, Etat state);
void initNiveau2(Pixel *Ecran, int ligne, int colonne);
void initNiveau3(Pixel *Ecran, int ligne, int colonne);
void on_level_of(Pixel *Ecran, int ligne, int colonne, niveau level);

#endif // NIVEAU_H_INCLUDED
