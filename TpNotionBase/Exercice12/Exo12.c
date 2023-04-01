#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre, jours, heures, minutes, secondes;
    printf("Saisir le temps en seconde : ");
    scanf("%d", &nombre);

    jours=nombre/86400;
    heures=(nombre%86400)/3600;
    minutes=((nombre%86400)%3600)/60;
    secondes=((nombre%86400)%3600)%60;

    printf("%d s= %d jrs %d h %d min %d s",nombre, jours, heures, minutes, secondes);
    return 0;
}
