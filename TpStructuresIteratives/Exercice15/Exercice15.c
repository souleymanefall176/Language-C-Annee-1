#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre,i,j,cpt;

    do{
        printf("Veuillez saisir un entier positif, pair, divisible par 4 et multiple de 10 : ");
        scanf("%d",&nombre);
    }while(nombre<0 || nombre%2!=0 || nombre%4!=0 || nombre%10!=0);
    printf("Les nombres premiers comprises entre 1 et %d sont : ", nombre);
    for(i=2;i<=nombre;i++){
        cpt=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                cpt++;
            }

        }
        if(cpt==0){
            printf("%d ",i);
        }
    }
    return 0;
}
