#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED
enum Etat
{
    VIDE, BRIQUES, CAISSES, USER, OBJECTIF, OK, CADRE
};
typedef enum Etat Etat;
struct Pixel
{
    int x;
    int y;
    Etat etat;
};
typedef struct Pixel Pixel;

Pixel initScreen(Pixel Ecran, int x, int y, Etat state);
// Get Accessors
Etat pixelEtat(Pixel Ecran);
int pixelXPosition(Pixel Ecran);
int pixelYPOsition(Pixel Ecran);
// set Accessors
Pixel setPixelEtatXPositionYPosition(Pixel Ecran, Etat state, int xpos, int ypos);

void initEcran(Pixel *Ecran, int ligne, int colonne);
void affecteEtat(Pixel Ecran, int ligne, int colonne, Etat etat);
void printEcran(Etat state);
void showEcranprinting(Pixel *Ecran, int ligne, int colonne);

#endif // SCREEN_H_INCLUDED
