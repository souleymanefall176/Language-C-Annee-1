#include <stdio.h>

int main(){
    int a,b,pgcd,min,i;
    do{
        printf("Saisir les nombre : ");
        scanf("%d %d",&a,&b);
    }while(a<0 && b<0);
    i=1;
    min=a;
    if(a>b){
        min=b;
    }
    while(i<=min){
        if(a%i==0 && b%i==0){
            pgcd=i;
        }
        i++;
    }
    printf("Le PGCD de %d et %d est %d.\n", a,b,pgcd);
    return 0;
}
