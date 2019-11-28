#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"
#include "structures.h"

//CETTE FONCTION NOUS PERMET D'INITIALISER ET DE CREER UN PAR DE VOITURE QUI SERA UTILISER AUCOUR DE TOUT LE PROGRAMME
void creer_parc_voiture()
{
    /*INITIALLISATION DES VOITURES DANS UNE VARIBLE STRUCTURE GRACE A LA FONCTION
    <strcpy> QUI EST UNE FONCTION QUI PERMET DE COPIER DES CHAINES DE CARACTERES DANS UNE VARIABLE*/
    strcpy(voiture[0].modele,"TOYOTA RAV4");
    fflush(stdin);
    strcpy((voiture[0].matricule),"AT1080");
    fflush(stdin);
    voiture[0].kilometrage=140;
    fflush(stdin);
    strcpy(voiture[0].etat,"Disponible");
    fflush(stdin);

    strcpy(voiture[1].modele,"NISSAN 2015");
    fflush(stdin);
    strcpy(voiture[1].matricule,"AA2080");
    fflush(stdin);
    voiture[1].kilometrage=156;
    fflush(stdin);
    strcpy(voiture[1].etat,"En cours de location");
    fflush(stdin);

    strcpy(voiture[2].modele,"LAMBORGUINI NEW");
    fflush(stdin);
    strcpy(voiture[2].matricule,"DD3005");
    fflush(stdin);
    voiture[2].kilometrage=290;
    fflush(stdin);
    strcpy(voiture[2].etat,"Disponible");
    fflush(stdin);

    strcpy(voiture[3].modele,"HONDA 115");
    fflush(stdin);
    strcpy(voiture[3].matricule,"AA1232");
    fflush(stdin);
    voiture[3].kilometrage=270;
    fflush(stdin);
    strcpy(voiture[3].etat,"Disponible");
    fflush(stdin);

    strcpy(voiture[4].modele,"TOYOTA 4X4");
    fflush(stdin);
    strcpy(voiture[4].matricule,"RE1256");
    fflush(stdin);
    voiture[4].kilometrage=240;
    fflush(stdin);
    strcpy(voiture[4].etat,"Disponible");
    fflush(stdin);

    strcpy(voiture[5].modele,"MERCEDECE BENZ");
    fflush(stdin);
    strcpy(voiture[5].matricule,"MB3006");
    fflush(stdin);
    voiture[5].kilometrage=295;
    fflush(stdin);
    strcpy(voiture[5].etat,"Disponible");
    fflush(stdin);

    strcpy(voiture[6].modele,"COROLA 2019");
    fflush(stdin);
    strcpy(voiture[6].matricule,"CA2010");
    fflush(stdin);
    voiture[6].kilometrage=300;
    fflush(stdin);
    strcpy(voiture[6].etat,"En cours de location");
    fflush(stdin);

    strcpy(voiture[7].modele,"VENZA 110");
    fflush(stdin);
    strcpy(voiture[7].matricule,"VZ2001");
    fflush(stdin);
    voiture[7].kilometrage=310;
    fflush(stdin);
    strcpy(voiture[7].etat,"Disponible");
    fflush(stdin);

    strcpy(voiture[8].modele,"MAZDA 100");
    fflush(stdin);
    strcpy(voiture[8].matricule,"MZ1504");
    fflush(stdin);
    voiture[8].kilometrage=280;
    fflush(stdin);
    strcpy(voiture[8].etat,"En cours de location");
    fflush(stdin);

    strcpy(voiture[9].modele,"PRADO 450");
    fflush(stdin);
    strcpy(voiture[9].matricule,"IB5000");
    fflush(stdin);
    voiture[9].kilometrage=330;
    fflush(stdin);
    strcpy(voiture[9].etat,"Disponible");
    fflush(stdin);

}
