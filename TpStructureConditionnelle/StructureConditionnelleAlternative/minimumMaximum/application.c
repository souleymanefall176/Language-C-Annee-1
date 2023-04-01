#include <stdio.h>

int main(){
    int entier1, entier2;

    printf("Veuillez saisir deux entiers: ");
    scanf("%d %d", &entier1, &entier2);

    if (entier1>entier2){
        printf("%d est le minimum et %d est le maximum. \n", entier2, entier1);
    } else {
        printf("%d est le minimum et %d est le maximum. \n", entier1, entier2);
    }


    return 0;
}



