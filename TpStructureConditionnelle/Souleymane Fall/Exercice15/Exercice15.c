#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration
    float b, c, x;

    //recuperation et affichage de donnees
    printf("Saisir les deux parametres de l'equation dans l'ordre : \n");
    scanf("%f%f", &b, &c);
    printf("L'equation saisit est %.1fx + %.1f .\n", b,c);

    //traitement
    if (b!=0){
        x=(-c/b);
        printf("x=%.1f", x);
    }else{
       printf("Impossible");
    }


    return 0;
}
