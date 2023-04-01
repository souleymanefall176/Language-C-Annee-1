#include <stdio.h>


int main(){
    int a, b;

    printf("Veuillez saisir deux entiers : ");
    scanf("%d %d", &a,&b);

    printf("Addition : %d + %d = %d \n",a,b, a+b);
    printf("Soustraction : %d - %d = %d \n",a,b, a-b);
    printf("Multiplication : %d * %d = %d \n",a,b, a*b);
    printf("Division Entiere : %d / %d = %d \n",a,b, a/b);
    printf("Division reelle : %d / %d = %.1f \n",a,b, (float)a/b);
    printf("Modulo : %d mod %d = %d\n",a,b, a%b);
return 0;
}
