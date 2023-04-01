#include <stdio.h>
#include <stdlib.h>

int main(){
    int nbr,som,i,j,cpt1=0;

    do{
        printf("Saisir une valeur entiere positive : ");
        scanf("%d",&nbr);
    }while(nbr<0);

    for(i=1;i<=nbr;i++){
        som=0;
        for(j=1;j<i;j++){
            if(i%j==0){
                som=som+j;
            }
        }
        if(som==i){
            printf("%d est un nombre parfait\n",i);
            cpt1++;
        }
    }
    return 0;

}
