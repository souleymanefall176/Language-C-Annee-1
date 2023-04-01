#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;

    printf("Veuillez saisir les 2 entieres : ");
    scanf("%d %d", &a, &b);

    printf("La premiere valeur saisit est %d et la deuxieme valeur saisi est %d\n", a, b);
    c=a;
    a=b;
    b=c;

    printf("La premiere valeur saisit devient %d et la deuxieme valeur saisi devient %d\n", a, b);

    return 0;
}

