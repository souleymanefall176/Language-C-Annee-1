#include <stdio.h>

int main(){

    int i,N,fact;

    do{
        printf("Veuillez saisir une valeur : ");
        scanf("%d",&N);
    }while(N<0);

    fact=1;
    if(N==0){
        fact=1;
        printf("%d!=%d",N,fact);
    }else{
        printf("%d!=",N);
        for(i=1;i<=N;i++){
            fact*=i;
            if(i<N){
                printf("%d*",i);
            }else{
                printf("%d",i);
            }
        }

        printf("= %d\n",fact);
        }

        return 0;

}
