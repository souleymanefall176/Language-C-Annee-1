#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
    float somme=0, moyenne=0,nombre;
    do{

        printf("Veuillez saisir un nombre : ");
        scanf("%f",&nombre);

        if(nombre!=-1){
            somme+=nombre;
            i++;
        }
    }while(nombre!=-1);
    moyenne=somme/i;
    printf("Le total est %.2f\n",somme);
    printf("%d",i);
    printf("La moyenne est %.2f\n",moyenne);
}

