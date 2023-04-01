#include <stdio.h>
#include <string.h>

typedef struct{
    char prenom[20];
    char nom[20];
    char matricule[20];
    float moyenne;
}Etudiant;

int main() {
    Etudiant e,eM,eP;
    int k,i;
    do{
        puts("Saisir le nombre d'etudiants");
        scanf("%d", &k);
    }while(k<=0);

    for (i = 1; i <=k; i++) {
        printf("\nSaisir les donnees de l'etudiant %d :\n", i + 1);
        printf("Prenom : ");
        scanf("%s",&e.prenom);
        do{
            printf("Nom : ");
            scanf("%s",&e.nom);
        }while(strlen(e.nom)<=1);

        do{
            printf("Moyenne : ");
            scanf("%f", &e.moyenne);
        }while(e.moyenne<=0 || e.moyenne>20);
        sprintf(e.matricule,"%c%c%c%c%d",e.prenom[0],e.nom[0],e.nom[1],(strlen(e.nom)<=2)?'@':e.nom[2],(strlen(e.nom)+strlen(e.prenom)));
        if(i==1){
            eP=e;
            eM=e;
        }else{
            if(eP.moyenne<e.moyenne){
                eP=e;
            }
            if(eM.moyenne>e.moyenne){
                eM=e;
            }
        }
    }
    puts("=========AFFICHAGE INFORMATIONS ETUDIANTS AVEC LA PLUS GRANDE MOYENNE=========");
    printf("Nom : %s\nPrenom : %s\nMatricule : %s\nMoyenne : %.2f\n",eP.nom,eP.prenom,eP.matricule,eP.moyenne);
    printf("%s\n",eP.matricule);
    puts("=========AFFICHAGE INFORMATIONS ETUDIANTS AVEC LA PLUS PETITE MOYENNE=========");
    printf("Nom : %s\nPrenom : %s\nMatricule : %s\nMoyenne : %.2f\n",eM.nom,eM.prenom,eM.matricule,eM.moyenne);
    printf("%s\n",eM.matricule);
}


