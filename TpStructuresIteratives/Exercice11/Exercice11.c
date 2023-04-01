#include <stdio.h>

int main(){
    int X,Y,i;
    printf("Veuillez saisir un nombre : ");
    scanf("%d",&X);
    do{
        printf("Veuillez saisir un nombre : ");
        scanf("%d",&Y);
    }while(Y<0);
    int pui=1;
    for(i=1;i<=Y;i++){
        pui*=X;
    }
    printf("%d^%d=%d",X,Y,pui);
    return 0;
}
