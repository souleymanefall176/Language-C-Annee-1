#include <stdio.h>
#include <stdlib.h>

int main(){
    float note1,note2,note3,note4,note5,noteTotal,moyenne,moyennePo;
    int coef1,coef2,coef3,coef4,coef5;

    printf("Veuillez saisir les notes ainsi que leurs coefficient.\n");
    scanf("%f %d", &note1, &coef1);
    scanf("%f %d", &note2, &coef2);
    scanf("%f %d", &note3, &coef3);
    scanf("%f %d", &note4, &coef4);
    scanf("%f %d", &note5, &coef5);

    noteTotal=note1*coef1+note2*coef2+note3*coef3+note4*coef4+note5*coef5;
    moyenne=noteTotal/(coef1+coef2+coef3+coef4+coef5);
    moyennePo=moyenne*100/20;

    printf("Note Total = %.2f\n", noteTotal);
    printf("Moyenne = %.2f\n", moyenne);
    printf("Pourcentage Moyenne = %.2f\n", moyennePo);

    return 0;
}
