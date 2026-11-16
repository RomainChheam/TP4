#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "zoo.h"

int main()
{
    int nombreAnimaux = 0;
    Animal *zoo[20] = {NULL}; 
    zoo[nombreAnimaux] = malloc(sizeof(Animal));
    int choix = 1;
    do
    {
        affichageMenu();
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1: 
            zoo[nombreAnimaux] = ajoutAnimal();
            nombreAnimaux++;
            
            break;

        case 2:
            printf("\n");
            for (int i = 0; i < nombreAnimaux; i++)
            {
                consulter_ani_zoo(*zoo[i]);
                printf("\n");
            }

            break;

        case 3: {
            int numero_animal;
            while (numero_animal < 0 || numero_animal >= nombreAnimaux)
            {
                printf("Quel animal voulez-vous nourrir ? (Entrez le numéro de l'animal, il y a %d animaux dnas le zoo) : ", nombreAnimaux);
                scanf("%d", &numero_animal);
            }
            nourrir(zoo, numero_animal);
            break;
        }
        case 4:
            vieillir(zoo[20], nombreAnimaux);
            break;

        case 5:
            santeAnimal(zoo[20], nombreAnimaux);
            break;

        case 6:
            
            break;

        case 0:
            
            break;

        default:
            printf("Ce n'est pas un choix valable.\n");
            break;
        }

    } while (choix != 0);
    return 0;
}