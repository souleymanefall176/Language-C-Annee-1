#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre;

    //Informations
    printf("Veuillez saisir un nombre: ");
    scanf("%d", &nombre);

    //Positif
    if (nombre>0){
        printf("Positif.");
    }
    //Negatif
    if (nombre<0){
        printf("Negatif.");
    }
    //Nul
    if (nombre==0){
        printf("Nul.");
    }

    return 0;
}
