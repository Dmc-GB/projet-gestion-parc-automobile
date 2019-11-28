#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //Gère la couleur
#include "fonction.h"
#include "structures.h"

//CETTE FONCTION PERMET DE FAIRE LA LOCATION DES VOITURES
void louer_voiture()
{
    int i,test,test1,test2;/*LESS VARIABLES test1,2,3 SONT UTILISER POUR RECUPERER
    LA VALEUR REVOYER PAR LA FONCTION <strcmp> APRES AVOIR COMPARER DEUX CHAINES DE CARACTERES*/
    char matriculesaisi[20];
    char etat_D[15]="Disponible";//ETAT DISPONIBLE
    char etat_E[25]="En cours de location";//ETAT EN COURS DE LOCATION

    printf("\n---------------------------------------------------------------------------");
    for(i=0;i<10;i++)
    {
            Color(15,0);
            printf("\n\t\tVOITURE %d\n", i+1);
            printf("\t\tModele: %s\n",voiture[i].modele);
            printf("\t\tMatricule: %s\n",voiture[i].matricule);
    }
    printf("---------------------------------------------------------------------------");

    printf("\n\n Veillez entrer le matricule de la voiture que vous desirez louer: ");
    scanf("%s",matriculesaisi);
    printf("\n\n");

    for(i=0;i<10;i++)
    {
         Color(15,0);
         test=strcmpi(matriculesaisi,voiture[i].matricule);
         test1=strcmp(etat_D,voiture[i].etat);
         test2=strcmp(etat_E,voiture[i].etat);
         int menu;


       if(test==0 && test1==0)
        {
                printf("\nLa voiture est disponible Voulez-vous la louer ? \n\nSi oui choisez '1' si non '0' pour retourner vers le menu\n");

                printf("\n1.LOUER\n");
                printf("\n0.QUITTER\n");

                printf("\n\n");

                do
                {
                    printf("Votre choix: ");
                    scanf("%d", &menu);

                    switch(menu)
                    {
                        case 0:
                            printf("\nMerci pour votre visite !!\n");
                            break;
                        case 1:
                            Color(10,0);
                            strcpy(voiture[i].etat, "En cours de location");
                            printf("\nBravo, vous venez de louer la voiture %s. Nous vous remercions beaucoup \npour la confiance.\n", voiture[i].modele);
                            break;
                     }
                } while (menu < 0 || menu > 1);
                        break;


           }
           else if(test==0 && test2==0)
           {
               Color(12,0);
               printf("\n\tDesole cette voiture est deja en cours de location \n\n");
               break;
           }
    }

    for(i=0;i<10;i++)
                {
                   Color(12,0);
                   if(test!=0)
                   printf("\n\tDesole cette voiture n'existe pas reesayez avec un matricule correct \n\n");
                   break;
                }
    retour_au_menu();
}






