#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "fonction.h"
#include "structures.h"

//CETTE FONCTION PERMET D'OBTENIR L'ETAT D'UNE VOITURE DE NOTRE PARC
void etat_voiture()
{
    int i,test;
    char matriculesaisi[20];

    Color(15,0);
    printf("\nEntrer le matricule de la voiture dont vous desirez connaitre l'etat: ");
    scanf("%s", matriculesaisi);
    printf("\n");

    for(i=0;i<10;i++)
    {
        test=strcmp(matriculesaisi,voiture[i].matricule);

        if(test==0)
        {
            printf("\n\t\tModele: %s\n",voiture[i].modele);
            printf("\n\t\tMatricule: %s\n",voiture[i].matricule);
            printf("\n\t\tKilometrage: %d Km\n",voiture[i].kilometrage);
            printf("\n\t\tEtat : %s\n",voiture[i].etat);
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        Color(12,0);
        if(test!=0)
        printf("\nDESOLE ! Cette voiture n'existe pas dans notre parc !!! Veuillez reesayez avec un matricule correct.\n");
        break;
    }

    retour_au_menu();
}





