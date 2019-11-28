#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //Gère la couleur
#include "fonction.h"
#include "structures.h"


//CETTE FONCTION PERMET DE SAUVEGARDER L'ETAT DU PARC DE VOITURES DANS UN FICHIER BINNAIRE QU'ON PEUT LIRE AU CLAVIER
void save()
{
    int total = 0, i;
    int test1,test2,nombre=0;
    char etat_D[11]="Disponible";
    char etat_E[25]="En cours de location";
    char nom_fichier[20];
    FILE *saveEtat = NULL;

    Color(15,0);
    printf("\n L'etat du parc de voitures est enregistre sous le nom : ");
    scanf("%s", nom_fichier);
    saveEtat = fopen(nom_fichier, "wb");

    if (saveEtat != NULL)
    {
        fprintf(saveEtat, "\n Nombre total de voitures: 10\n\n");

        fprintf(saveEtat, " Liste des voitures en cours de location:\n\n");
        for(i=0; i<10; i++)
        {
            test2=strcmp(etat_E,voiture[i].etat);

            if (test2 == 0)
            {
                    nombre+=1;
                    fprintf(saveEtat, "Matricule: %s\n", voiture[i].matricule);
            }
        }
        fprintf(saveEtat,"\n Nombre de voitures en cours de location: %d\n\n", nombre);
        fprintf(saveEtat, " Liste des voitures disponible:\n\n");
        for(i=0;i<10;i++)
        {
            test1=strcmp(etat_D,voiture[i].etat);

            if (test1 == 0)
            {
                nombre+=1;
                fprintf(saveEtat, "Matricule: %s\n", voiture[i].matricule);
            }
            else
            {
                    nombre-=1;
            }
        }
        fprintf(saveEtat,"\nNombre de voitures disponible: %d\n", nombre);
        //Calcul du killometrage moyen
        for (i = 0; i<10; i++)
        {
        total = voiture[i].kilometrage + total;
        }
        fprintf(saveEtat, " Le kilometrage moyen de l'ensemble des voitures est: %d Km\n\n", total/i);
        Color(10,0);
        printf("\n L'Etat du parc a bien ete sauvegarde.\n");

        fclose(saveEtat);
    }
    retour_au_menu();

}

