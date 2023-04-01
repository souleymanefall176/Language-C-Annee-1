#include <stdio.h>

int main(){
    int nbr1,nbr2,produit,i;
    printf("Saisir les deux nombres : ");
    scanf("%d %d",&nbr1,&nbr2);

    produit=1;
    for(i=1;i<=nbr2;i++){
        produit+=nbr1;
    }
    printf("%d * %d = %d",nbr1,nbr2,produit-1);
    return 0;
}
