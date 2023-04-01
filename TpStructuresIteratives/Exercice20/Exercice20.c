#include <stdio.h>

int main(){
    int i=1,n,cpt=0,resultat=0;
    resultat=0;

    do{
         printf("Saisir un nombre compris entre 1 et 500 : ");
         scanf("%d",&n);
    }while(n<1 || n>500);


    for(i=n*2;i>=1;i--){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }


    return 0;
}
