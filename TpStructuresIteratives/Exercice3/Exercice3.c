#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0,n,somme=0;
    do{
        printf("Veuillez saisir un nombre (saisir 0 pour quitter) : ");
        scanf("%d",&n);
        if(n!=0){
            somme+=n;
            i++;
        }
    }while(n!=0);

    if(i==0 && n==0){
        printf("Erreur\n");
    }else{
        printf("La note totale est %d\n",somme);
        printf("La moyenne est %.2f\n",(float)somme/i);
    }
    return 0;
}
