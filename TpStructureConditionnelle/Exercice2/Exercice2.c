#include <stdio.h>

int main(){
    int a,b;

    printf("Veuillez saisir deux entiers : ");
    scanf("%d %d", &a, &b);

    if ((a>0 && b>0) || (a<0 && b<0){
        printf("Positif");
    }else if (a==0 || b==0){
        printf("Nul");
    }else {
        printf("Negatif");
    }
    return 0;


}
