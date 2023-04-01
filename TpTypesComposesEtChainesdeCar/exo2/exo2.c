
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char nom[30],prenom[30],service[50],sexe;
    int age;
}EMPLOYE;

int main(){
    EMPLOYE e,eP;
    int i,N,som=0,nbr=0;
    do{
        puts("Saisir le nombre d'employe : ");
        scanf("%d",&N);
    }while(N<=0);

    for(i=1;i<=N;i++){
        fflush(stdin);
        do{
            fflush(stdin);
            puts("Saisir le nom de l'employe : ");
            gets(e.nom);
        }while(strlen(e.nom)>29);
        do{
            fflush(stdin);
            puts("Saisir le prenom de l'employe : ");
            gets(e.prenom);
        }while(strlen(e.prenom)>29);
        do{
            fflush(stdin);
            puts("Saisir le sexe de l'employe : ");
            scanf("%c",&e.sexe);
        }while(toupper(e.sexe)!='M' && toupper(e.sexe)!='F');
        do{
            fflush(stdin);
            puts("Saisir le service de l'employe : ");
            gets(e.service);
        }while(strlen(e.service)>49);
        do{
            fflush(stdin);
            puts("Saisir l'age de l'employe : ");
            scanf("%d",&e.age);
        }while(e.age<0);
        som+=e.age;
        if(i==1 && (toupper(e.sexe)=='F') && (e.age>=18 && e.age<=35)){
            eP=e;
        }else{
            if((strlen(eP.nom)<strlen(e.nom)) && (toupper(e.sexe)=='F') && (e.age>=18 && e.age<=35)){
                eP=e;
            }

        }
        if(strchr(strlwr(e.nom),'a')!=NULL && strlen(e.nom)>3){
            nbr++;
        }
    }
    if(N==1 && toupper(e.sexe)=='F' && e.age>=18 && e.age<=35){
        printf("L'employe qui a le nom le plus long, de sexe feminin et age entre 18 et 35 ans est %s %s, age de %d, du service %s\n",e.nom,e.prenom,e.age,e.service);
    }else if(N!=1 && toupper(eP.sexe)=='F' && eP.age>=18 && eP.age<=35){
        printf("L'employe qui a le nom le plus long, de sexe feminin et age entre 18 et 35 ans est %s %s, age de %d, du service %s\n",eP.nom,eP.prenom,eP.age,eP.service);

    }
    printf("La moyenne des ages est %.2f\n",(float)som/N);
    printf("Le nombre d’employe dont le nom contient a et depasse 3 caracteres %d\n",nbr);
    return 0;
}
