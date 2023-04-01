#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int nombre;
    do{
        printf("Veuillez saisir un nombre positif : ");
        scanf("%d",&nombre);
    }while(nombre<0);

    if(nombre==2){
        printf("Ce nombre est un nombre premier.\n");

    }else if(nombre<2){
        printf("Ce nombre n'est pas un nombre premier.\n");
    }
    for(i=2;i<=nombre/2;i++){
        if(nombre%i==0){
            printf("Ce nombre n'est pas un nombre premier.\n");
            break;
        }else {
            printf("Ce nombre est un nombre premier.\n");
            break;
        }
    }
    //methode 2
    int cpt=0;
    for(i=2;i<=nombre/2;i++){
        if(nombre%i==0){
            cpt++;
        }
    }
    if(cpt>1){
        printf("Ce nombre n'est pas un nombre premier.\n");
    }else{
        printf("Ce nombre est un nombre premier.\n");
    }
}
