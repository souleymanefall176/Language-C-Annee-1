#include <stdio.h>
#include <stdlib.h>
#define TVA 0.18

int main(){
    int prixUnitaire;
    float MTTC, quantite, MHT;
    char libelle[100], code[100];


    printf("Entrer le nom du produit : ");
    scanf("%s",&libelle);
    printf("Entrer le code du produit : ");
    scanf("%s",&code);
    printf("Entrer la quantite du produit : ");
    scanf("%f",&quantite);
    printf("Entrer le prix unitaire du produit : ");
    scanf("%d",&prixUnitaire);
    MHT=prixUnitaire*quantite;
    MTTC=(TVA+1)*MHT;
    printf("Libelle %s \t Code %s : \t MHT = %f \t MTTC = %f\n", libelle,code,MHT,MTTC);

//fflush(stdin)


}
