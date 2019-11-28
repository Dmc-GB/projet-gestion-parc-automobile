#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

//ICI SONT LES STRUCTURES UTLISER AUCOURS DE NOTRE PROGRAMME
typedef struct Voiture
{
    char modele[25];
    char matricule[25];
    int kilometrage;
    char etat[25];
}Voiture;

typedef struct Groupe Groupe;
struct Groupe
{
    char membre[50];
};
Voiture voiture[10];
Groupe membres[8];


#endif // STRUCTURES_H_INCLUDED
