#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct personne{
    char nom[10];
    char prenom[11];
    int age;
};

int main(){
    int N,i,j;
    float moy=0;

    do{
        printf("Veuillez saisir le nombre de personne : ");
        scanf("%d",&N);
    }while(N<0);

    struct personne p[N+1];
    for(i=1;i<=N;i++){

        printf("Veuillez saisir le nom puis le prenom de la personne %d : ",i);
        scanf("%s %s",&p[i].nom, &p[i].prenom);
        p[i].prenom[0]=toupper(p[i].prenom[0]);
        for(j=0;j<=strlen(p[i].nom);j++){
            p[i].nom[j]=toupper(p[i].nom[j]);
        }

        do{
           printf("Veuillez saisir l'age de %s %s : ",p[i].prenom, p[i].nom);
           scanf("%d",&p[i].age);
           if(p[i].age<0){
                printf("Erreur: un age ne peut etre jamais negatif !!!\n");
           }
        }while(p[i].age<0);
        moy+=p[i].age;


        printf("******Personne %d ****** \n Nom : %s \n Prenom : %s \n Age : %d\n",i,p[i].nom,p[i].prenom,p[i].age);

    }
    printf("La moyenne des ages saisit est de %.1f\n",moy/N);

    return 0;
}
