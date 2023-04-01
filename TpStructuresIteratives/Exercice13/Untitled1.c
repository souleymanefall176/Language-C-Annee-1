#include<stdio.h>
#include<stdlib.h>//EXIT_SUCCESS

main(){
    int i=0;
    int n, max, min, somme=0;
    do
    {
        printf("entrer une serie de valeurs :\n");
        scanf("%d", &n);
        if(i==0){
            max=n;
            min=n;
            i++;
            somme+=n;
        }else{
            if(n > max){
                max=n;
            }
            if(n < min && n != 0){
                 min=n;
                i++;
                somme+=n;
            }
        }

    }while(n!=0);
}
