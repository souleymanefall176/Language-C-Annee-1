#include <stdio.h>

int main()
{
    int annee;
    printf("Veuillez saisir une ann�e : ");
    scanf("%d", &annee);

    if ((annee%4==0 && annee%100!=0)  || (annee%400==0)){
        printf("%d est une annee bissextile", annee);
    } else {
        printf("%d n'est pas une annee bissextile", annee);
    }
    return 0;
}
