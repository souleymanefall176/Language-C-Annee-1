#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a,b,calcul;

    printf("Veuillez saisir deux entiers : ");
    scanf("%d %d", &a,&b);

    if (a%2==0)
    {
        printf("Calcul = %d",a*(b-1)+a);
    }
    else
    {
        printf("Calcul = %d",a*(b+1));

    }

    return 0;
}
