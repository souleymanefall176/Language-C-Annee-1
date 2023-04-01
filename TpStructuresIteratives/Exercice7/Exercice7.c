#include <stdio.h>

int main(){
    int n,div,divabs,nabs,rest,cpt=0;

    printf("Saisir le nombre : ");
    scanf("%d",&n);
    nabs=abs(n);
    do{
        printf("Saisir le diviseur : ");
        scanf("%d",&n);
    }while(div==0);
    divabs=div;
    rest=nabs;
    do{
        rest=rest-divabs;
        cpt++;
    }while(rest>=divabs);
    if((n>=0 && div>0) || (n<0 && div<0)){
        printf("Le reste de la division est %d \n",rest);
        printf("Le quotient de la division est %d\n",cpt);

    }else{
        printf("Le reste de la division est %d \n",rest);
        printf("Le quotient de la division est %d \n",-cpt);
    }
    return 0;
}
