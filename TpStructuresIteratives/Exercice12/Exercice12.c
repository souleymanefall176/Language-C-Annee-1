#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int nombre,i,somme=0,moyenne=0,produit=1,N,compteur=0;
    do{
        printf("Veuillez entrer le nombre de valeurs a saisir : ");
        scanf("%d",&N);
        if(N<0){
            printf("Erreur\n");
        }
    }while(N<0);

    for(i=1;i<=N;i++){
        do{
            printf("Veuillez saisir une valeur : ");
            scanf("%d",&nombre);
            if(nombre<0){
                printf("Erreur:Vous devais saisir un entier positifs\n");
            }
        }while(nombre<0);
        if(sqrt(nombre)*sqrt(nombre)==nombre){
            somme+=nombre;
        }
        if(nombre%2==0){
            produit*=nombre;
        }else{
            moyenne+=nombre;
            compteur++;
        }

    }
    moyenne/=compteur;
    printf("La somme des nombres carres est %d\n",somme);
    printf("Le produit des nombres paires est %d\n",produit);
    printf("La moyenne des nombres impaires est %d\n",moyenne);
    return 0;
}
