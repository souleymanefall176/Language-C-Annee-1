#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(i=0;i<=2021;i+=4){
        if(i%100!=0){
            printf("%d\n",i);
        }

    }

    return 0;

}

