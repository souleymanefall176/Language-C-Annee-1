#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct produit{
    char code[10];
    char libelle[30];
    int prix;
    float quantite;
};
struct superieur{
    char code[10];
    char libelle[30];
    int prix;
    float quantite;
};


int main(){
    struct produit p[6];
    struct superieur sup;


    sup.prix=0;
    for(int i=1;i<=5;i++){
        printf("Veuillez saisir le code et le libelle  du produit %d : ",i);
        scanf("%s %s",&p[i].code,&p[i].libelle);
        do{
            printf("Veuillez saisir le prix  du  %s : ",p[i].libelle);
            scanf("%d",&p[i].prix);
            if(p[i].prix<0){
                printf("Erreur: un prix n'est jamais negatif ou nul.\n");
            }
        }while(p[i].prix<0);
        do{
            printf("Veuillez saisir la quantite  du  %s : ",p[i].libelle);
            scanf("%f",&p[i].quantite);
            if(p[i].quantite<0){
                printf("Erreur: une quantité n'est jamais negatif ou nul.\n");
            }
        }while(p[i].quantite<=0);
        if(p[i].prix>=sup.prix){
            strcpy(sup.code, p[i].code);
            strcpy(sup.libelle, p[i].libelle);
            sup.prix=p[i].prix;
            sup.quantite=p[i].quantite;
        }

    }
    printf("Code : %s | Libelle : %s | Prix : %d | Quantite : %f\n",sup.code,sup.libelle,sup.prix,sup.quantite);

    return 0;
}
