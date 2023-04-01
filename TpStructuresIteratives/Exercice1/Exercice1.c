#include <stdio.h>
#include <stdlib.h>

int main(){
    int max,min,nombreValeur,valeur,i;
    do{
        printf("Veuillez saisir le nombre de valeur à saisir : ");
        scanf("%d",&nombreValeur);
    }while(nombreValeur<0)



    for(i=1;i<=nombreValeur;i++){
        printf("Veuillez saisir la valeur : ");
        scanf("%d",&valeur);
        if(i==1){
            max=valeur;
            min=valeur;
        }
        if(valeur>=max){
            max=valeur;
        }
        if(valeur<=min){
            min=valeur;
        }
    }
    printf("Valeur maximale %d\n",max);
    printf("Valeur minimale %d",min);

    return 0;
}
