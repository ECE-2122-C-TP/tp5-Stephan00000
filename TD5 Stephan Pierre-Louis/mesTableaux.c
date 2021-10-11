//
// Created by steph on 06/10/2021.
//

#include <stdio.h>
#include "exercices.h"
#include "mesStructures.h"
#include "fonctionsUtiles.h"


int remplirTab(int pInt[]) {
 int taille = 0;
 int i = 0;
    printf("Veuillez choissir le nombre d'element de votre tableau \n");
 taille = saisirEntier();
 for (i = 0; i < taille; i++) {
     printf("entrez le nombre numero %i de votre tableau \n", i+1);
     pInt[i] = saisirEntier();
 }
 return taille;
}

int maxTab(int pInt[],int taille) {
    int plusGrand = 0;
    for (int i = 0; i < taille ; i++) {
        if (pInt[i] > plusGrand ) {
            plusGrand = pInt[i];
        }
    }
    return plusGrand;

}



