#include <stdio.h>

int main(){
    int nombre;

    printf("Veuillez saisir un nombre: ");
    scanf("%d", &nombre);

    if (nombre%2==0){
        printf("Nombre Pair");
    } else {
        printf("Nombre Impair");
    }
    return 0;
}
