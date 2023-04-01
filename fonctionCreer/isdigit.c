#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,val,reste,cpt=0,verif,a=0;
    do{
        puts("Saisir un nombre positif:");
        scanf("%d",&N);
    }while(N<0);
    printf("n %d\n",N);
    val=N;
    verif=1;
    while(val!=0){
        if(val!=N){
            a=a*0.1+val;
        }
        reste=val%10;
        val/=10;

        cpt++;
    }
    printf("a %d\n",a);
    printf("a*10+reste %d\n",a*10+reste);
    if(a*10+reste!=N){
        verif=0;
    }

    if(verif==1){
        printf("Numerique");
    }else{
        printf("Non numerique");
    }

}
