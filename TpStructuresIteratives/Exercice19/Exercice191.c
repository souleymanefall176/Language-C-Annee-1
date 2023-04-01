#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre,i,j,cpt;
    printf("Veuillez saisir un nombre : ");
    scanf("%d",&nombre);

    cpt=0;
    for(i=2;i<nombre/2;i++){
            if(nombre%i==0){
                cpt+=1;
            }

    }
    if(cpt==0){
        printf("Ce nombre est un nombre premier");
    }else {
        printf("Ce nombre n'est un nombre premier");

    }
    return 0;
}
