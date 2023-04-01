#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nombre,moyenneNegatif,moyennePositif,compteurPositif=0,compteurNegatif=0,sommePositif=0,sommeNegatif=0;
    int i;
    for(i=1;i<=6;i++){
        printf("Veuillez saisir les notes : ");
        scanf("%f",&nombre);
        if(nombre>0){
            sommePositif+=nombre;
            compteurPositif++;
        }else{
            if(nombre<0){
                sommeNegatif+=nombre;
                compteurNegatif++;
            }
        }
    }

    moyenneNegatif=sommeNegatif/compteurNegatif;
    moyennePositif=sommePositif/compteurPositif;
    printf("Moyenne des valeurs negatives : %f\n",moyenneNegatif);
    printf("Moyenne des valeurs positives : %f",moyennePositif);

    return 0;
}
