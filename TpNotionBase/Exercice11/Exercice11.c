#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float nombre, carre, racineCarre;
    int Vabsolue;

    printf("Veuillez saisir un nombre : ");
    scanf("%f", &nombre);

    //Le carré d'un nombre
    carre=pow(nombre,2);
    printf("Le carre de %.1f = %.1f \n", nombre, carre);

    Vabsolue=abs(nombre); //abs calcule la valeur absolue d'un ebtier. Dans le cas ou on aurait pas importer la bibliotheque stdlib on pourrait faire Vabsolue=abs((int)nombre)
    printf("Valeur absolue  de %0.1f = %d \n", nombre, Vabsolue);

    if (nombre<0){
        printf("La racine carre d un nombre negatif est impossible \n");
    }
    else {
        racineCarre=sqrt(nombre);
        printf("Racine carre de %.1f = %f \n", nombre, racineCarre);
    }




    return 0;
}
