#include <stdio.h>


int main(){
    char c;
    int a,b;


    printf("Veuillez saisir entier 1 : ");
    scanf("%d", &a);
    printf("Veuillez saisir entier 2 : ");
    scanf("%d", &b);
    fflush(stdin);
    printf("Veuillez saisir L'operateur : ");
    scanf("%c", &c);

    if (c=='+'){
        printf("Addition : %d + %d = %d \n",a,b, a+b);
    } else if (c=='-'){
        printf("Soustraction : %d - %d = %d \n",a,b, a-b);
    } else if (c=='*'){
        printf("Multiplication : %d * %d = %d \n",a,b, a*b);
    }else if (c=='d'){
        printf("Division Entiere : %d / %d = %d \n",a,b, a/b);
    }else if (c=='/'){
        printf("Division reelle : %d / %d = %.1f \n",a,b, (float)a/b);
    }else if (c=='%'){
        printf("Modulo : %d mod %d = %d\n",a,b, a%b);
    }

    return 0;
}

