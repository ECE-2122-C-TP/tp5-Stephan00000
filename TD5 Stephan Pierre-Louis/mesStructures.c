//
// Created by steph on 06/10/2021.
//

#include <stdio.h>
#include "mesStructures.h"
#include "fonctionsUtiles.h"


NR saisirNR() {
    int numerateur, denominateur;
    NR nbR = {0};
    printf("veuiller saisir votre nombre rationnel :\n Numerateur ? \n");
    numerateur = saisirEntier();
    printf("denominateur ? \n");
    denominateur = saisirEntier();
    nbR.numerateur = numerateur;
    nbR.denominateur = denominateur;
    return nbR;
}

void afficherNR( NR nombreR) {
    int numerateur = nombreR.numerateur;
    int denominateur = nombreR.denominateur;
    printf(" %i  /  %i\n", numerateur, denominateur);
}

NR additionNR(NR nbR1, NR nbR2) {
    NR nbR = {0};
    nbR.numerateur = (nbR1.numerateur * nbR2.denominateur) + (nbR2.numerateur * nbR1.denominateur);
    nbR.denominateur = nbR1.denominateur * nbR2.denominateur;
    return nbR;
}

NR multiplicationNR(NR nbR1, NR nbR2) {
    NR nbR = {0};
    nbR.numerateur = nbR1.numerateur * nbR2.numerateur;
    nbR.denominateur = nbR1.denominateur * nbR2.denominateur;
    return nbR;
}

int pgcdNR(NR nombreR) {
    int numerateur = nombreR.numerateur;
    int denominateur = nombreR.denominateur;
    int diviseur = pgcd(numerateur,denominateur);
    return diviseur;

}

NR simplifier(NR nombreR) {
    int diviseur = pgcdNR(nombreR);
    nombreR.numerateur = (nombreR.numerateur/diviseur);
    nombreR.denominateur = (nombreR.denominateur/diviseur);
    return nombreR;


}
