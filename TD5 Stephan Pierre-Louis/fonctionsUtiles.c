//
// Created by steph on 11/10/2021.
//
#include <stdio.h>

int error() {
    printf("Action invalide ! Il y a une erreur quelque part \n !");
    return -1;

}

char saisirchar() {
    int chara = 0;
    printf("Veuillez saisir un caractere \n");
    scanf("%c",&chara);
    return chara;
}



int saisirEntier() {
    int entier = 0;
    printf("Veuillez saisir un entier \n");
    scanf("%i",&entier);
    return entier;
}


int pgcd( int entier1, int entier2) {
    int diviseur = 1;
    int diviseurLimite = 0;
    int compteur  = 0;
    if (entier1 < entier2) {
        diviseurLimite = entier1;
    }
    else {
        diviseurLimite = entier2;
    }
    for (compteur = 1; compteur <= diviseurLimite ; compteur++ ) {
        if ( entier1%compteur == 0 && entier2%compteur==0)  {
            diviseur = compteur;
        }
    }
    return diviseur;
}