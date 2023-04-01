#include <stdio.h>

int main(){
    int n,i;
    printf("Saisir un nombre : ");
    scanf("%d",&n);
    printf("Les 5 nombres avant %d sont : ",n);
    for(i=n-5;i<=n+5 ;i++){

        if(i==n){
            printf("et les 5 nombres apres %d sont : ",n);
        }else{
            printf("%d ",i);
        }
    }

    return 0;
}
