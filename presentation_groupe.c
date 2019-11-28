#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h> //Gère la couleur
#include "structures.h"
#include "fonction.c"

//CETTE FONCTION PERMET DE PRESENTER LES MEMBRES DU GROUPE 2 A LA FIN DU PROGRAMME
void creer_membres()
{
    strcpy(membres[0].membre, "Mariano GBEGO");
    fflush(stdin);
    strcpy(membres[1].membre, "Audrey EDOH");
    fflush(stdin);
    strcpy(membres[2].membre, "Isaac GOUNTON");
    fflush(stdin);
    strcpy(membres[3].membre, "Pascal CHANGOYOMI");
    fflush(stdin);
    strcpy(membres[4].membre, "Joris AWOUI");
    fflush(stdin);
    strcpy(membres[5].membre, "Richard HOUNMONTO");
    fflush(stdin);
    strcpy(membres[6].membre, "Auxil HOUESSOU");
    fflush(stdin);
    strcpy(membres[7].membre, "Igor AKPATA");
    fflush(stdin);
}

void groupe2()
{
    int i;
    Color(14,0);
    printf("\n                          ~~~@@@@@ CERCO IA @@@@@~~~              \n");
    printf("\n  CE PROGRAMME A ETE ECRIT PAR LE GROUPE 2 DONT LES MEMBRES SONT LES SUIVANTS :\n\n");

    Color(15,0);
    for (i = 0; i<8; i++)
    {
        printf("\n %d- %s\n",i+1,membres[i].membre);
    }
}
