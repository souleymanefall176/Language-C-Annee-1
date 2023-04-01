#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j;

    //Partie haut avec incrementation
    for (i=1; i<=10;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    //Partie bas avec decrementation
    for (i=1; i<=10;i++)
    {
        for(j=10;j>=i;j--){
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}
