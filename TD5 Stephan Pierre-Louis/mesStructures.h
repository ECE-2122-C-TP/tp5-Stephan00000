//
// Created by steph on 06/10/2021.
//

#ifndef UNTITLED2_MESSTRUCTURES_H
#define UNTITLED2_MESSTRUCTURES_H


/*
 * Stucture qui sert à enregistrer des nombres rationnels de la forme :
 *  { int numerateur, int denominateur}
 */
typedef struct NombreRationnel {
    int numerateur, denominateur;
} NR ;


/* Fonction qui permet de saisir un nombre rationnel
 * IN: saisi du numerateur et du denominateur par l'utilisateur
 * OUT : un nombre rationnel
 */
 NR saisirNR() ;

/*
 * Fonctions afficher permet d'afficher un nombre rationnel
 * IN : un nombre rationnel sous le format NR
 * OUT : le meme nombre sous le format : numerateur / denominatueur
 */
 void afficherNR( NR nombreR);

 /* Fonction qui permet d'additioner deux nombres rationels
  * IN : deux nombre rationels nbR1 et nbR2
  * OUT : le résultat de l'addition nbR1+nbR2
  */
 NR additionNR( NR nbR1 , NR nbR2);



/* Fonction qui permet de multiplier deux nombres rationels
 * IN : deux nombre rationels nbR1 et nbR2
 * OUT : le résultat de la multiplication nbR1*nbR2
 */
 NR multiplicationNR(NR nbR1 , NR nbR2);

 /*
  * Fonction pgcdNR donne le pgcd des termes d'un nombre rationnel
  * IN : un nombre ratinnel utilisant la structure NR
  * OUT : le pgcd du numerateur et du denominateur d'un nombre rationnel
  */
 int pgcdNR(NR nombreR);

 /*
  * Fonction simplifier va simplifier un nombre rationel
  * IN : Un nombre rationnel au format NR
  * OUT : le meme nombre rationnel simplifié
  */
 NR simplifier(NR nombreR);






#endif //UNTITLED2_MESSTRUCTURES_H
