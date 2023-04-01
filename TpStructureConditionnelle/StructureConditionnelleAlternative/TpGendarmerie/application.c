#include <stdio.h>

int main(){
    float poids;

    printf("Veuillez saisir votre poids: ");
    scanf("%f", &poids);

    if (poids>=75){
        printf("Candidature accepte");
    } else {
        printf("Candidature rejete");
    }


    return 0;
}


