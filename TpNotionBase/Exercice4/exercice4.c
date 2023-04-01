#include <stdio.h>


int main(){
    int entier;
    float reel;
    char caractere[100];

    printf("Veuillez saisir un entier: ");
    scanf("%d",&entier);
    printf("Veuillez saisir un reel: ");
    scanf("%f",&reel);
    printf("Veuillez saisir une chaine de caractere: ");
    scanf("%s", &caractere);
    printf("l'entier saisit est %d \n", entier);
    printf("le reel saisit est %f \n", reel);
    printf("la chaine de caractere saisit est %s \n", caractere);


    return 0;
}
