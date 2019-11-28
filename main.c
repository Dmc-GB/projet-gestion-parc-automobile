#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>//Gère la couleur
#include "structures.h"//CONTIENT LES PROTOTYPES DES FONCTIONS
#include "fonction.h"//CONTIENT LES FONCTION



//IL SAGIT ICI DE LA FONCTION PRINCIPALE
int main()
{
    creer_parc_voiture();

    int choix;

    do
    {
                  //Le caractere \xDB correspond au caractere ASCII numero 219 qui est un bete carre notr

            Color(11,0);
            printf("\n\n             \xDB|--------------- ####### MENU DU PARC #######----------------|\xDB\n             \xDB                                                              \xDB\n             \xDB                                                              \xDB");
            printf("\n             \xDB|                  1:LOUER UNE VOITURE                       |\xDB\n             \xDB                                                              \xDB");
            printf("\n             \xDB|                  2:RETOURNER UNE VOITURE                   |\xDB\n             \xDB                                                              \xDB");
            printf("\n             \xDB|                  3:ETAT D'UNE VOITURE                      |\xDB\n             \xDB                                                              \xDB");
            printf("\n             \xDB|                  4:ETAT DU PARC DE VOITURE                 |\xDB\n             \xDB                                                              \xDB");
            printf("\n             \xDB|                  5:SAUVEGARDER L'ETAT DU PARC              |\xDB\n             \xDB                                                              \xDB");
            printf("\n             \xDB|_________________ 0:FIN DU PROGRAMME _______________________|\xDB\n\n");
            printf("\n\n                     Entrez votre choix : ");
            scanf("%d", &choix);

     switch(choix)
      {
         system("cls");
         case 1: system("cls");

         printf("\n\n          ###BIENVENU DANS NOTRE SOUS MENU === LOUER UNE VOITURE ===\n");
         louer_voiture();

         system("cls");
         break;
         case 2: system("cls");

         printf("\n\n         ###BIENVENU DANS NOTRE SOUS MENU === RETOUR D'UN VOITURE ===\n\n");
         retour_voiture();

         system("cls");
         break;
         case 3: system("cls");

         printf("\n\n         ###BIENVENU DANS NOTRE SOUS MENU === ETAT D'UNE VOITURE ===\n\n");
         etat_voiture();

         system("cls");
         break;
         case 4: system("cls");

         printf("\n\n       ###BIENVENU DANS NOTRE SOUS MENU === ETAT DU PARC DE VOITURES ===\n\n");
         etat_parc_voiture();

         system("cls");
         break;
         case 5: system("cls");

         printf("\n\n###BIENVENU DANS NOTRE SOUS MENU === SAUVEGARDER ETAT DU PARC DE VOITURES ===\n\n");
         save();

         system("cls");
         break;
         case 0: system("cls");

         printf("\n                      *****FIN DU PROGRAMME*****\n\n\n\n");
         creer_membres();
         groupe2();
         break;
         default :system("cls");
         Color(12,0);

         printf("\n       ERREUR!! Choississez entre1 ou 2 ou 3 ou 4 ou 5 ou 0: ");
         retour_au_menu();
         system("cls");
         break;



      }
    } while(choix!=0);


    return 0;
}
