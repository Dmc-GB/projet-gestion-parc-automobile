#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "fonction.h"
#include "structures.h"


//CETTE FONCTION PERMET D'OBTENIR UN RESUMER DE L'ETAT DU PARC DE NOS VOITURES
void etat_parc_voiture()
{

    int i = 0, total = 0, nombre_L = 0, nombre_D = 0;/*LA VARIABLE total EST LA SOMME DES KILOMETRAGES DE
    TOUTE LES VOITURES DU PARC,nombre_L REPRESENTE LE NOMBRE DE VOITURE EN COURS DE LOCATION ET nombre_D LE NOMBRE DE VOITURE DISPONIBLE*/
    int test1, test2;
    char etat_D[11]="Disponible";
    char etat_E[25]="En cours de location";

    printf("\n---------------------------------------------------------------------------");
    for (i = 0; i<10; i++)
    {
        total = voiture[i].kilometrage + total;
    }
    Color(15,0);//PERMET DE DONNER DE COULEUR DIFERANTE A CHAQUE SOUS MENU EN AGISANT SUR SES PARAMETRES
    printf("\n Nombre total de voitures: %d\n\n", i);

    printf("\n Liste des matricules des voitures en cours de location:\n\n");
    for(i=0; i<10; i++)
    {
        test2=strcmp(etat_E,voiture[i].etat);

        if (test2 == 0)
        {
                nombre_L+=1;
                printf("\n Matricule: %s\n", voiture[i].matricule);
        }
    }

    printf("\n Nombre de voitures en cours de location: %d\n\n", nombre_L);
    printf("\n Liste des matricules des voitures disponible:\n\n");
    for(i=0;i<10;i++)
    {
        test1=strcmp(etat_D,voiture[i].etat);

        if (test1 == 0)
        {
            nombre_D+=1;
            printf("\n Matricule: %s\n", voiture[i].matricule);
        }

    }
    printf("\n Nombre de voitures disponible: %d\n\n", nombre_D);
    printf("\nLe kilometrage moyen de l'ensemble des voitures est: %d Km\n", total/i);
    printf("\n---------------------------------------------------------------------------");
    retour_au_menu();

}

