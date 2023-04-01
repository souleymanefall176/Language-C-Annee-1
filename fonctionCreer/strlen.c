#include <stdio.h>
#include <stdlib.h>

int main(){
    char chaine[200];
    int i = 0;
    puts("Saisir une chaine : ");
    gets(chaine);
    while(chaine[i]!='\0'){
        i++;
    }
    printf("Strlen(chaine)=%d\n",i);

    return 0;
}
