#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
    char code[10],prenom[20],nom[20],fonction[20];
    int nbrEn,salaire;
}ETUDIANT;
int main(){
    ETUDIANT e;
    int i,x,cptGaye=0;


    for(i=1;i<=1;i++){
        printf("Veuillez saisir le nom, prenom, code et fonction de l'employe : ");
        scanf("%s %s %s %s",&e.nom,&e.prenom,&e.code,&e.fonction);

        do{
            printf("Saisir le nombre d'enfants : ");
            scanf("%d",&e.nbrEn);
        }while(e.nbrEn<0);
        do{
            printf("Saisir le salaire : ");
            scanf("%d",&e.salaire);
        }while(e.salaire<0);
        if(strlen(e.prenom)>5 && (e.prenom[strlen(e.prenom)-1]=='E' || e.prenom[strlen(e.prenom)-1]=='e')){
           printf("Nom : %s\nPrenom : %s\nCode : %s\nFonction : %s\nNombre d'enfants : %d\nSalaire : %d\n",e.nom,e.prenom,e.code,e.fonction,e.nbrEn,e.salaire);
        }
        if(strcasecmp((e.nom),"GAYE")==0){
            cptGaye++;
        }

    }

    printf("Le nombre d'employe dont le nom est GAYE est : %d",cptGaye);
    return 0;
}
/*

*/
