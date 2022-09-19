#ifndef OBJECTIFS_OK_H_INCLUDED
#define OBJECTIFS_OK_H_INCLUDED

struct PositionOnjectif
{
    int xpos;
    int ypos;
    bool etatObj;
    bool etatOk;

};
typedef struct PositionOnjectif PositionOnjectif;

void showObjectif(Pixel *Ecran, int ligne, int colonne, int xpos, int ypos, PositionOnjectif P);
void showObjectif(Pixel *Ecran, int ligne, int colonne, int xpos, int ypos, PositionOnjectif P)
{

}

#endif // OBJECTIFS_OK_H_INCLUDED
