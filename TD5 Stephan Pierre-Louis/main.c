#include <stdio.h>
#include "exercices.h"
#include "mesStructures.h"
#include "mesTableaux.h"
#include "fonctionsUtiles.h"

    int main() {
        printf("=====\tTP5 : Structures et tableaux\t=====\n");
        int choixExercice = 0;

        //On demande son choix à l'utilisateur
        printf("Quel exercice voulez-vous lancer ?\n");
        //les choix disponibles sont affichés ici :

        do{
            scanf("%d", &choixExercice);
            switch (choixExercice) {
                case 1 :
                    exercice1();
                    break;
                case 2 :
                    exercice2();
                    break;
                case 3 :
                    exercice3();
                    break;
                case 0 :
                    break;
                default : {
                    printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                    break;
                }
            }
            printf(" selectionez l'exercice que vous voulez effectuer ou 0 pour quitter \n");
        }while (choixExercice != 0); //Si choix == 0 on arrête !

        printf("Au revoir !\n");

        return 0;
    }


