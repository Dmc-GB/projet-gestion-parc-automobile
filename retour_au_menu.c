#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "fonction.h"
#include "structures.h"

//CETTE FONCTION PERMET LE RETOUR AU MENU APRES L'EXECUTION D'UN SOUS MENU
void retour_au_menu()
{
    int choix;
        do{
                    printf("\n\n0:RETOUR AU MENU\n\n");
                    Color(15,0);
                    printf("Entrez '0' pour aller au menu: ");
                    scanf("%d",&choix);
                    break;

          }while(choix!=0);

}
