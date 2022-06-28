#include "blocks.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void briqueZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 68);
    printf("\254");
    SetConsoleTextAttribute(console, 15);
}
void spaceZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 0);
    printf("\254");
    SetConsoleTextAttribute(console, 15);
}
void cadreZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 119);
    printf("\254");
    SetConsoleTextAttribute(console, 15);
}
void caisseZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 15);
    printf("%c", 254);
    SetConsoleTextAttribute(console, 15);
}
void objectifZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 112);
    printf("*");
    SetConsoleTextAttribute(console, 15);
}
void okZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 170);
    printf("\254");
    SetConsoleTextAttribute(console, 15);
}
void userZone(void)
{
    HANDLE console;
    console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, 6);
    printf("@");
    SetConsoleTextAttribute(console, 15);
}
