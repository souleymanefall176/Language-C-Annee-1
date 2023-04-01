#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    do{
        printf("Veuillez saisir l'entier n : ");
        scanf("%d",&n);
    }while(n<=0);


    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",i,n,i*n);
    }

    return 0;
}
