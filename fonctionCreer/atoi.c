#include <stdio.h>
#include <stdlib.h>

int main(){
    char chaine[200];
    int i,cpt=0,verif=0,entier=0,val;
    do{
        puts("Saisir une chaine : ");
        gets(chaine);
        while(chaine[cpt]!='\0'){
            cpt++;
        }
        for(i=0;i<cpt;i++){
            if(chaine[i]>='0' && chaine[i]<='9'){
                verif=1;
            }else{
                verif=0;
                break;
            }
        }
        if(verif==0){
            puts("La chaine saisie contient un caractere non numerique");
        }
    }while(verif==0);

    for(i=0;i<cpt;i++){
        val=chaine[i]-48;
        entier=entier*10+val;
    }
    printf("%d\n",entier);


    return 0;
}

