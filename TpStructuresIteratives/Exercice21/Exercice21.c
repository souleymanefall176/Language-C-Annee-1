#include <stdio.h>

int main(){
    int i,nbr,cpt=0;

    printf("Veuillez saisir un nombre : ");
    scanf("%d",&nbr);

    for(i=2;i<=nbr;i+=2){
        if(nbr%2==0){
            cpt++;
        }
    }
    printf("%d est divisible %d fois par 2\n",nbr,cpt);

    return 0;

}
