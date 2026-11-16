#ifndef ZOO
#define ZOO

typedef struct Animal
{
    char nom[100];
    char espece[100];
    int age;
    char habitat[50];
    char sante[10];
    int faim;
} Animal;

Animal ajoutAnimal();

void afficher_ani_zoo(Animal p[], int taille);

void consulter_ani_zoo(Animal p);


#endif