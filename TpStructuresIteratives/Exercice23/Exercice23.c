#include <stdio.h>

int main(){

int i=1,j,cpt=0,som,val;
    do{
        printf("Saisir une valeur : ");
        scanf("%d",&val);
    }while(val<=0);
    while(i<=cpt+i && cpt<val){
        som=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                som+=j;
            }
        }
        if(som==i){
            printf("%d est un nombre parfait\n",i);
            cpt+=1;
        }
        i+=1;
    }
    return 0;
}
