#include <stdio.h>


int main(){
    float C,L,l;
    printf("Veuillez entrer le cote du carre : ");
    scanf("%f", &C);
    printf("Veuillez entrer la longueur et la largeur du rectangle : ");
    scanf("%f %f", &L, &l);
    printf("La surface du carre est egale a %.2f  \n", C*C);
    printf("La surface du rectangle est egale a %.2f  ", L*l);
    return 0;
}
