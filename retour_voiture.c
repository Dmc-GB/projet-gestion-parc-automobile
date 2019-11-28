#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "fonction.h"
#include "structures.h"

//CETTE FONCTION PERMET DE RETOURNER UNE VOITURE DEJA LOUER AUPPARAVANT
void retour_voiture()
{
    int i,test,test1,test2, kilo = 0, menu=0;
    char matriculesaisi[20];
    char etat_D[15]="Disponible";
    char etat_E[25]="En cours de location";
    printf("\n---------------------------------------------------------------------------");
    for(i=0;i<10;i++)
    {
            Color(15,0);
            printf("\n\t\tVOITURE %d\n", i+1);
            printf("\t\tModele: %s\n",voiture[i].modele);
            printf("\t\tMatricule: %s\n",voiture[i].matricule);
    }
    printf("---------------------------------------------------------------------------");
    Color(15,0);
    printf("\nEntrer le numero matricule de la voiture a retourner: ");
    scanf("%s", matriculesaisi);
    printf("\n");

    for(i=0;i<10;i++)
    {
        test=strcmp(matriculesaisi, voiture[i].matricule);
        test1=strcmp(etat_D, voiture[i].etat);
        test2=strcmp(etat_E, voiture[i].etat);

        if(test==0 && test1==0)
        {
            Color(12,0);
            printf("\n\tDESOLE ! Cette voiture n'etait pas en cours de location.\n");
            break;
        }
        else if(test==0 && test2==0)
        {
            Color(15,0);
            printf("\nLa voiture %s immatriculee %s est en cours de location.\n\nVoulez-vous la retourner ?\n\nSi oui, choisissez '1' si non '0' pour quiter.\n", voiture[i].modele, voiture[i].matricule);
            printf("\n1.RETOUR\n");
            printf("\n0.QUITER\n");

            printf("\n\n");

            do
            {
                Color(15,0);
                printf("Votre choix: ");
                scanf("%d", &menu);

                switch(menu)
                {
                    case 0:
                        printf("\nMerci pour votre visite !!\n");
                        break;
                    case 1:
                        printf("\nCombien de kilometres avez vous effectues avec la voiture: ");
                        scanf("%d",&kilo);
                        voiture[i].kilometrage += kilo;
                        strcpy(voiture[i].etat, "Disponible");
                        Color(10,0);
                        printf("\nMerci pour votre fidelite.Le retour de la voiture %s vient \nd'etre effectif.\n", voiture[i].modele);
                        break;
                 }
            } while (menu<0 || menu>1);
                    break;
        }
    }
    for(i=0;i<10;i++)
    {
        Color(12,0);
        if(test!=0)
        printf("\n\tDESOLE ! Cette voiture n'existe pas dans notre parc !!! Veuillez reesayez avec un matricule correct\n");
        break;
    }
    retour_au_menu();

}

