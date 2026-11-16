#include <stdio.h>
#include "zoo.h"

Animal ajoutAnimal()
 {
    Animal temp;
    printf("Nom de l'animal : ");
    scanf("%s", &temp.nom);
    printf("Espece de l'animal : ");
    scanf("%s", &temp.espece);
    printf("Age de l'animal : ");
    scanf("%d", &temp.age);
    printf("habitat de l'animal : ");
    scanf("%s", &temp.habitat);
    while (temp.sante != "bon" && temp.sante != "moyen" && temp.sante != "mauvais")
    {
        printf("Etat de sante de l'animal (bon, moyen ou mauvais): ");
        scanf("%s", &temp.sante);
        if (temp.sante != "bon" && temp.sante != "moyen" && temp.sante != "mauvais")
        {
            printf("Etat de sante non valable\n");
        }
    }
    while (temp.faim < 0 || temp.faim > 100)
    {
        printf("Faim de l'animal : ");
        scanf("%d", temp.faim);
        if (temp.faim < 0 || temp.faim > 100)
        {
            printf("Ce n'est pas une valeur valable.\n");
        }
    }
    return temp;
 }

 // fonction pour afficher les animaux du zoo : la taille est la taille du tableau


 void afficher_ani_zoo(Animal p[], int taille){
    for(int i = 0 ; i<taille ; i++){
        printf("animal %d : %c", i, p[i].nom);
    }
}


// partie 1.2.4
void consulter_ani_zoo (Animal p){
    printf("Nom de l'animal : %s \n", p.nom);
    printf("Espece de l'animal : %s \n", p.espece);
    printf("Age de l'animal : %d \n", p.age);
    printf("habitat de l'animal : %s \n", p.habitat);
    printf("Etat de sante de l'animal : %s \n", p.sante);
}

void affichageMenu()
{
    printf("========= ZOO VIRTUEL =========\n\n");
    printf("1. Ajouter un animal\n");
    printf("2. Afficher tous les animaux\n");
    printf("3. Nourrir un animal\n");
    
}