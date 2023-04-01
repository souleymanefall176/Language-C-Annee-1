#include <stdio.h>

int main(){
    int nbr,i,cpt=0;

    do{
        printf("Saisir un nombre : ");
        scanf("%d",&nbr);
    }while(nbr<=0);

    for(i=1;i<=nbr/2;i++){
        if(nbr%i==0 && i*i==nbr){
            printf("C'est un carre parfait\n");
            cpt++;
        }
    }
    if(cpt==0){
        printf("Ce n'est pas un carre parfait\n");
    }

}

