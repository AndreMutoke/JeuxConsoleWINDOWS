/*
##############################################
##                                          ##
##      Author : Andre MUTOKE               ##
##      Date : 27-06-2022                   ##
##      File Name : main.c                  ##
##      Description : main part of game     ##
##                                          ##
##############################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "lib/blocks.h"
#include "lib/screen.h"
#include <stdbool.h>
#include "lib/niveau.h"
#include "lib/menu.h"
#define MAXLINE 13
#define MAXCOL 21
int main()
{
    system("cls");
    Pixel Ecran[MAXLINE][MAXCOL];
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 15);
    //initEcran(&Ecran[0][0], MAXLINE, MAXCOL);
    //on_level_of(&Ecran[0][0], MAXLINE, MAXCOL, DEBUTANT);
    //showEcranprinting(&Ecran[0][0], MAXLINE, MAXCOL);
    menu(&Ecran[0][0], MAXLINE, MAXCOL);
    return 0;
}
