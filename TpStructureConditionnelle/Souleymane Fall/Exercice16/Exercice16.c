#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaration
    float a, b, c, delta, racineDelta, x1, x2, x0;

    //recuperation et affichage de donnees
    printf("Saisir les 3 parametres du polynome : \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("L'equation saisit est %.1fx2 + %.1fx + %.1f .\n",a, b,c);
    //traitement
    if (a!=0){
        delta=pow(b,2)-4*a*c;
        racineDelta=sqrt(delta);
        if (racineDelta>0){ //si delta positif
            x1=(-b-racineDelta)/(2*a);
            x2=(-b+racineDelta)/(2*a);
            printf("L'equation admet deux solutions distinctes : \n");
            printf("x1 = %.1f \t et \t x2 = %.1f .\n", x1, x2);

        }else if (racineDelta==0){ //si delta nul
            x0=(-b)/(2*a);
            printf("L'equation admet une solution double : \n");
            printf("x0 = %.1f .\n", x0);
        } else { //si delta negatif
            printf("L'equation n'admet pas de  solution dans R. \n");

        }
    } else {
        printf("L'equation n'est pas du second degre \n");
    }
    return 0;
}
