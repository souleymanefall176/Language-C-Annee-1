#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[8];
    int coef;
    float note;
}MATIERE;
int main(){
    MATIERE m,mSup;
    float moyenne;
    int i,N,somCoef;
    do{
        printf("Saisir le nombre de matieres : ");
        scanf("%d",&N);
    }while(N<=0);
    moyenne=0;
    somCoef=0;
    fflush(stdin);
    for(i=1;i<=N;i++){
            fflush(stdin);
        do{
            puts("Saisir le nom de la matiere : ");
            gets(m.nom);
        }while(strlen(m.nom)>7);
        do{
            puts("Saisir le coefficient de la matiere : ");
            scanf("%d",&m.coef);
        }while(m.coef>6 || m.coef<1);
        do{
            puts("Saisir la note de la matiere : ");
            scanf("%f",&m.note);
        }while(m.note>20 || m.note<0);
        moyenne+=m.note*m.coef;
        somCoef+=m.coef;
        if(m.coef>=2){
            printf("Nom : %s\nNote : %.2f\nCoefficient : %d\n",m.nom,m.note,m.coef);
        }


    }
    printf("Moyenne des notes %.2f\n",moyenne/somCoef);


    return 0;
}
