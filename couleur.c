#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //Gère la couleur

//CETTE FONCTION PERMET D'AJOUTER DES COULEURS DANS NOTRE MENU ET NOS SOUS MENUS
void Color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,f*16+t);
}
