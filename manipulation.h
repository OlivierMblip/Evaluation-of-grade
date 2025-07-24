/***************************************************************************************
* 									 MANIPULATION.H
 ***************************************************************************************
    Auteur : Olivier Millette
    Date   : 22 juillet 2025

    Ce module ...

*****************************************************************************************/

/****************************************************************************************
*                                     HEADER GUARD                                        *
****************************************************************************************/
#ifndef __T_MANIPULATION_H__
#define __T_MANIPULATION_H__

/****************************************************************************************
*                          DEFINITIONS DE TYPES ET DE CONSTANTES                          *
****************************************************************************************/


/****************************************************************************************
*                           DÉCLARATION DES FONCTIONS PUBLIQUES                          *
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
double* creer_tableau1d(int nb_cases);


void liberer_tab1d(int* tabld);

double* write_grade_in_tab(double* tab,int number_of_result);

double* write_pond_in_tab(double* tab,int number_of_result);

#endif