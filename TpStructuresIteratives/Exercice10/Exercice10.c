#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,nombre,nombreAbs,diviseur,somme=0,compteur=0;
    printf("Veuillez saisir un nombre : ");
    scanf("%d",&nombre);
    nombreAbs=abs(nombre);
    printf("Les diviseurs de %d sont : ",nombre);
    for(i=1;i<=nombreAbs;i++){
        if(nombreAbs%i==0){
            printf("%d ",i);
            compteur++;
            somme+=i;
        }

    }
    printf("\n");
    printf("Le nombre de diviseurs de %d est %d\n",nombre,compteur);
    printf("La somme des diviseurs de %d est %d\n",nombre,somme);
    return 0;
}
