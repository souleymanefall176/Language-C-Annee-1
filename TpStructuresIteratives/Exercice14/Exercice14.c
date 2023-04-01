#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,produit;
    char reponse;
    produit=1;
    do{
        do{
            printf("Veuillez saisir un entier positif : ");
            scanf("%d",&x);
            produit*=x;
            fflush(stdin);
            printf("Voulez vous saisir d'autres valeurs (o/n) : ");
            scanf("%c", &reponse);
            if(reponse!='o' && reponse!='n'){
                printf("Erreur:vous devez saisir o ou n.\n");
                fflush(stdin);
                printf("Voulez vous saisir d'autres valeurs (o/n) : ");
                scanf("%c", &reponse);
            }
        }while(reponse=='o');
    }while(reponse!='o' && reponse!='n');
    printf("*********Resultat*********\n");
    printf("Le produit des entiers saisit est %d\n",produit);

    return 0;
}
