#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void creer_parc_voiture()
{
    int i,n=5;

    printf("\t\tVoici la liste des voitures de notre parc:\n\n");
    for(i=0;i<n;i++)
    {
        printf("\n\t\t\tVoirure %d\n\n",i+1);
        printf("\n\tModele: ");
        gets(&voiture[i]->modele);
        fflush(stdin);
        printf("\n\tN matricule: ");
        gets(&voiture[i].matricule);
        fflush(stdin);
        printf("\n\tKilometrage en Km: ");
        scanf("%d",&voiture[i].kilometrage);
        fflush(stdin);
        scanf("%d",&voiture[i].etat);
        fflush(stdin);

        int i;
        printf("\n     *****VOICI LA LISTE DES VOITURE DANS NOTRE PARC****\n\n");
    while(i<10)
    {
        printf("\n                  VOITURE %d\n\n",i+1);
        printf("\n                Modele: %s\n",voiture[i]->modele);
        printf("\n                Matricule: %s\n",voiture[i]->matricule);
        printf("\n                Kilometrage: %d\n",voiture[i]->kilometrage);
        i++;
    }

}
        /*int i=0;
    FILE *mod=fopen("modele.txt","r");
    FILE *mat=fopen("matricule.txt","r");
    FILE *kil=fopen("kilometrage.txt","r");
    FILE *eta=fopen("etat.txt","r");
        Voiture voiture[10];
        if(mod==NULL)
        if(mat==NULL)
        if(kil==NULL)
        if(eta==NULL)
            exit(1);
        for(i=0;i<10;i++)
        {
            fscanf(mod, "%s" ,voiture[i].modele);
            fflush(stdin);
            fscanf(mat, "%s" ,voiture[i].matricule);
            fflush(stdin);
            fscanf(kil, "%d" ,voiture[i].kilometrage);
            fflush(stdin);
            fscanf(eta, "%s" ,voiture[i].etat);
            fflush(stdin);
        }
    printf("\n     *****VOICI LA LISTE DES VOITURE DANS NOTRE PARC****\n\n");
    for(i=0; i<10; i++)
    {
        printf("\n                  VOITURE %d\n\n",i+1);
        printf("\n                Modele: %s\n",voiture[i].modele);
        printf("\n                Matricule: %s\n",voiture[i].matricule);
        printf("\n                Kilometrage: %d\n",*voiture[i].kilometrage);
    }

        /*while(printf(voiture[i].modele,25,mod)!=0 && fgets(voiture[i].matricule,25,mat)!=0 && fgetc( kil)!=0 && fgets(voiture[i].etat,25,eta)!=0 )
        printf("Modele:%s\nMatricule:%s\n",voiture[i].modele,voiture[i].matricule);
        i++;


    fclose(mod);
    fclose(mat);
    fclose(kil);
    fclose(eta);

}*/
