#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char chaine[30];
    int i,j,cpt=0,k,N;
    do{
        puts("Veuillez saisir le nombre de chaine : ");
        scanf("%d",&N);
    }while(N<=0);
    for(k=1;k<=N;k++){
        fflush(stdin);
        do{
            fflush(stdin);
            puts("Saisir une chaine : ");
            gets(chaine);
        }while(strlen(chaine)>29);

        for(i=0,j=strlen(chaine)-1;i<strlen(chaine) && j>=0;i++,j--){ //for(i=0,j=strlen(chaine)-1;i<j;i++,j--)
            if(chaine[i]==chaine[j]){
                cpt++;
            }
        }
        if(cpt==strlen(chaine)){//if(cpt==strlen(chaine)/2)
            puts("C'est un palindrome");
        }else{
            puts("Ce n'est pas un palindrome");
        }
    }

    return 0;
}
