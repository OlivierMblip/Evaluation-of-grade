/****************************************************************************************
/*                                      MATH.C                                       *
/****************************************************************************************
    Auteur : Olivier Millette
    Date   : 22 juillet 2025

    This module contain function to evaluate academic result.

    Liste des fonctions publiques:


*****************************************************************************************/
#include <stdlib.h>
#include  <stdio.h>
#include "math.h"
#include "manipulation.h"

/****************************************************************************************
*                           DÉFINTION DES TYPES ET CONSTANTES                           *
****************************************************************************************/



/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PRIVÉES                           *
****************************************************************************************/
/*
gerer_entrees

    Cette fonction permet, lorsque l'utilisateur appuie sur "S","T","R" ou "ESC"
    d'enregistrer la prochaine commande qui sera effectuée sur la forme de notre
    plan cartésien ainsi que l'enregistrement des coordonnées lors de l'appui de
    la souris et de son relâchement.

    Paramètres:
        - application : Un pointeur vers le gestionnaire de l'application.


    Retour:
        - Tableau dynamique "commande".
*/




/****************************************************************************************
*                           DÉFINITION DES FONCTIONS PUBLIQUES                          *
****************************************************************************************/

//
//Commentaire rapidos sur la fonction
//
double* creer_tableau1d(int nb_cases)
{
    double* nouveau_tableau = (double*) malloc(nb_cases * sizeof(double));
    return nouveau_tableau;
}

//
//Commentaire rapidos sur la fonction
//
void liberer_tab1d(int* tabld)
{
    free(tabld);
}

//
//Commentaire rapidos sur la fonction
//
double* write_grade_in_tab(double* tab,int number_of_result)
{
    for (int i = 0; i < number_of_result; i++)
    {
        printf("Enter value of the grade:(9999 if not evaluated)");
        scanf("%lf",&tab[i]);
    }
    return tab;
}

//
//Commentaire rapidos sur la fonction
//
double* write_pond_in_tab(double* tab,int number_of_result)
{
    for (int i = 0; i < number_of_result; i++)
    {
        printf("Enter value of ponderation");
        scanf("%lf",&tab[i]);
    }
    return tab;
}
/****************************************************************************************
*                           DÉFINITION DES FONCTIONS PRIVÉES                            *
****************************************************************************************/
//
//Commentaire rapidos sur la fonction
//











