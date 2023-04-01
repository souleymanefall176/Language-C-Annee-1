#include <stdio.h>

int main(){
    char caractere;
    printf("Veuillez saisir un caractere : ");
    scanf("%c",&caractere);

    if(caractere=='a' || caractere=='e' || caractere=='i' || caractere=='o' || caractere=='u' || caractere=='y' ||
       caractere=='A' || caractere=='E' || caractere=='I' || caractere=='O' || caractere=='U' || caractere=='Y'){
        printf("Vous avez saisi une voyelle.\n");
    } else if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')){
        printf("Vous avez saisi une consonne.\n");
    } else {
        printf("Vous avez saisi un autre caractere.\n");
    }

    return 0;
}
