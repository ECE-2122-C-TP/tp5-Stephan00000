//
// Created by steph on 11/10/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "fonctionsUtiles.h"
#include "mesStructures.h"
#include "mesTableaux.h"

int tabEntiers[NB_ELEM_MAX] = {0};




void exercice1() {
    NR nombreR1 = {0}, nombreR2 = {0}, res = {0};
    printf("Bienvennu au rauyaume des nombres rationnels ! \n");
    printf(" si vous souhaitez additionnez des nombres rationnels selectionnez 1 \n ");
    printf("si vous souauhaitez en multiplier selectionnez 2\n selectionner autre chose pour terminer l'exercice\n  ");
    char choix = saisirEntier();
    switch (choix ) {
        case 1 : {   printf("choississez deux nombres rationnel, je vous donne leur somme: \n");
        nombreR1 = saisirNR();
        nombreR2 = saisirNR();
        res = additionNR(nombreR1,nombreR2);
        res = simplifier(res);
        afficherNR(res);
        break;

    }
    case  2 :  {
        printf("choississez deux nombres rationnel, je vous donne leur multilples: \n");
        nombreR1 = saisirNR();
        nombreR2 = saisirNR();
        res  = multiplicationNR(nombreR1,nombreR2);
        res = simplifier(res);
        afficherNR(res);
        break;
    }
    default : break;
    }


return;



}

void exercice2() {
    int taille = remplirTab(tabEntiers);
    printf("votre Tableau est le suivant : \n");
    int maxTabEntier = 0;
    maxTabEntier = maxTab(tabEntiers,taille);
    printf("La taille du tableau est %i et son plus grand element est %i \n", taille, maxTabEntier);
    return;
}

void exercice3() {

}

