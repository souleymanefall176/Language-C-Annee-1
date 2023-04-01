#include <stdio.h>

int main(){
    float poids;

    printf("Veuillez mettre votre poids: ");
    scanf("%f", &poids);

    if (poids>=60 && poids<=80){
        printf("Valide");
    } else {
        printf("Invalide");
    }


    return 0;
}

