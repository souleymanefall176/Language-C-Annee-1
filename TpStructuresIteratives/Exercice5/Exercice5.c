#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M,i;
    do{
        printf("Veuillez saisir un nombre positif (borne inf) : ");
        scanf("%d",&N);
        printf("Veuillez saisir un nombre positif (borne sup) : ");
        scanf("%d",&M);
        if((N<0 || M<0) || (N>=M)){
            printf("Erreur\n");
        }
    }while((N<0 || M<0) || (N>=M));
    printf("Les nombres compris entre %d et %d sont : ",N,M);
    for(i=N+1;i<M;i++){
        printf("%d ",i);
    }
    return 0;
}
