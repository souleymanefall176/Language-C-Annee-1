#include <stdio.h>
#include <math.h>
#define pi 3.14  //<<on peut ne pas declarer la constante et mettre directement define>>

int main(){
    float r;

    printf("Veuillez entrer le rayon du cercle : ");
    scanf("%f", &r);

    printf("La surface du cercle est egale a %.1f \n", pow(r,2)*pi); //la onction pow permet d'elever au puissance, il prend deux parametres, le nombre et la puissance
    printf("La circonference du cercle est egale a %.1f \n", 2*r*pi);
    return 0;
}
