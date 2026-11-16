#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "zoo.h"

Animal* ajoutAnimal()
{
    Animal* temp = malloc(sizeof(Animal));
    if (temp == NULL) {
        printf("Erreur d'allocation memoire.\n");
        return NULL;
    }

    printf("Nom de l'animal : ");
    scanf("%s", temp->nom); // Pas d'espace apres %s, pas de '&', pas de getchar()

    printf("Espece de l'animal : ");
    scanf("%s", temp->espece); // Idem

    printf("Age de l'animal : ");
    scanf("%d", &temp->age);

    printf("Habitat de l'animal : ");
    scanf("%s", temp->habitat); // Idem

    temp->faim = -1; // Indispensable pour etre sur de rentrer dans le while
    while (temp->faim < 0 || temp->faim > 100)
    {
        printf("Faim de l'animal : ");
        scanf("%d", &temp->faim);
        if (temp->faim < 0 || temp->faim > 100)
        {
            printf("Ce n'est pas une valeur valable.\n");
        }
    }

    if (temp->faim < 34) {
        strcpy(temp->sante, "Bon");
    } else if (temp->faim < 67) {
        strcpy(temp->sante, "Moyen");
    } else {
        strcpy(temp->sante, "Mauvais");
    }

    return temp;
}

 // fonction pour afficher les animaux du zoo : la taille est la taille du tableau


 void afficher_ani_zoo(Animal p[], int taille){
    for(int i = 0 ; i<taille ; i++){
        printf("animal %d : %c", i + 1, p[i].nom);
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



// fontion pour nourrir les animaux du zoo || pour nourrir l'animal en question il faut désigner le numéro de l'animal dans le tableau à "numéro animal"
void nourrir(Animal *p[],int numero_animal){
    if(p[numero_animal]->faim > 30){
        p[numero_animal]->faim = p[numero_animal]->faim - 30;
        printf("L'animal %d a été abreuvé avec une nourrite (à vous de voire laquelle) \n", numero_animal);
    }
    else if(p[numero_animal]->faim < 30){
        p[numero_animal]->faim = 0;
        printf("l'animal a bien bouffe \n");
    }
    return;
}


// fonction pour faire vieillir les animaux du zoo
void vieillir(Animal p[], int taille){
    for(int i = 0 ; i<taille ; i++){
        p[i].age++;
        p[i].faim += 20;
        if (p[i].faim < 34)
        {
            strcpy(p[i].sante, "Bon");
        } 
        else if (p[i].faim < 67) {
            strcpy(p[i].sante, "Moyen");
        } 
        else {
            strcpy(p[i].sante, "Mauvais");
        }
    }

}


void affichageMenu()
{
    printf("========= ZOO VIRTUEL =========\n\n");
    printf("1. Ajouter un animal\n");
    printf("2. Afficher tous les animaux\n");
    printf("3. Nourrir un animal\n");
    printf("4. Faire vieillir les animaux\n");
    printf("5. Verifier la sante d'un animal\n");
    printf("6. Afficher les statistiques du zoo\n");
    printf("0. Quitter\n\n\n");
}


void santeAnimal(Animal zoo[20], int nombreAnimaux){
    for(int i = 0 ; i<nombreAnimaux ; i++){
        if(zoo[i].faim < 34){
            strcpy(zoo[i].sante, "Bon");
        }
        else if(zoo[i].faim < 67){
            strcpy(zoo[i].sante, "Moyen");
        }
        else{
            strcpy(zoo[i].sante, "Mauvais");
        }
    }
}

/*

int age_moyen_ani(Animal p[], int nombreAnimaux){
    for(int i =0; i<=nombreAnimaux, i++){
    
    }
}

*/