#include <stdio.h>
#include <stdlib.h>

int main(){
    char chaine[200]="";
    int i,reste,verif=0,entier,val,strlen,cpt=0;
    do{
        puts("Saisir un entier positif : ");
        scanf("%d",&entier);
    }while(entier<0);
    val=entier;
    do{
        reste=val%10;
        val/=10;
        cpt++;
    }while(val!=0);

    val=entier;
    strlen=cpt;
    cpt--;
    do{
        reste=val%10;
        chaine[cpt]=reste+'0';
        val/=10;
        cpt--;
    }while(val!=0);

    for(i=0;i<strlen;i++){
        printf("%c",chaine[i]);
    }

    return 0;
}


