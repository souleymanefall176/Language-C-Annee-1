#include <stdio.h>

int main(){
    int age;

    printf("Veuillez saisir votre age : ");
    scanf("%d", &age);

    if (age>=18){
        printf("Adulte");
    }else{
        printf("Mineur");
    }
    return 0;
}
