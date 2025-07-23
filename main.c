/***********************************************************************************************************************
* MAIN.C                                                                                                              *
 ***********************************************************************************************************************
    Autheur : Olivier Millette
    Modification : Olivier Millette
    Date    : 22 octobre 2025

    This program will evaluate the academic result needed to pass a course. With a lot of possibility

    Liste des fonctions publiques:
        - Aucune

***********************************************************************************************************************/
#include <stdlib.h>
#include  <stdio.h>
#include "math.h"
#include "manipulation.h"
/***********************************************************************************************************************
* Main                                                                                  *
*************************************************************************************/


int main(void){

int threshold;
    printf("is there a double threshold if yes enter 1 , if not 0");
    scanf("%d", &threshold);

    if (threshold == 1)
    {
        int evaluation_number_threshold;
        int evaluation_number_non_threshold;

        printf("Enter the number of threshold evaluation:");
        scanf("%d", &evaluation_number_threshold);
        printf("Enter the number of non threshold evaluation:");
        scanf("%d", &evaluation_number_non_threshold);

        double* tab_threshold = creer_tableau1d(evaluation_number_threshold);
        double* tab_non_threshold = creer_tableau1d(evaluation_number_non_threshold);

        write_grade_in_tab(tab_threshold,evaluation_number_threshold);
        write_grade_in_tab(tab_non_threshold,evaluation_number_non_threshold);

        for (int i = 0; i < evaluation_number_threshold; i++)
        {
            printf("%lf\n",tab_threshold[i]);
        }
        for (int i = 0; i < evaluation_number_non_threshold; i++)
        {
            printf("%lf\n",tab_non_threshold[i]);
        }

        free(tab_threshold);
        free(tab_non_threshold);
    }



}






