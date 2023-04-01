#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaration
    float a, b, c, delta, racineDelta, x1, x2, x0,x;

    //recuperation et affichage de donnees
    printf("Saisir les 3 parametres du polynome : \n");
    scanf("%f%f%f", &a, &b, &c);
    printf("L'equation saisit est %.1fx² + %.1fx + %.1f .\n",a, b,c);
    //traitement
    if (a!=0){
        delta=pow(b,2)-4*a*c;
        if (delta>0){ //si delta positif
            racineDelta=sqrt(delta);
            x1=(-b-racineDelta)/(2*a);
            x2=(-b+racineDelta)/(2*a);
            printf("L'equation admet deux solutions distinctes : \n");
            printf("x1 = %.1f \t et \t x2 = %.1f .\n", x1, x2);

        }else if (delta==0){ //si delta nul
            x0=(-b)/(2*a);
            printf("L'equation admet une solution double : \n");
            printf("x0 = %.1f .\n", x0);
        } else { //si delta negatif
            printf("L'equation n'admet pas de  solution dans R. \n");

        }
    } else {
        printf("L'equation est du premier degre. \n");
        if(b!=0){
            x=(-c/b);
            printf("x=%.1f", x);
        }else{
            printf("L'equation n'a pas de solution.\n");
        }

    }
    return 0;
}
