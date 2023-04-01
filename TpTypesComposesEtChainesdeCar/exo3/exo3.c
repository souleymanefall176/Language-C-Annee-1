#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char nom[30],prenom[30],code[50],origine[30];
    int age;
}MENDIANT;
int main(){
    MENDIANT m,m1,m2,a;
    int i,N,som=0,nbr=0,sA=0;
    do{
        puts("Saisir le nombre de mendiant : ");
        scanf("%d",&N);
    }while(N<=2);

    for(i=1;i<=N;i++){
        fflush(stdin);
        do{
            fflush(stdin);
            puts("Saisir le nom du mendiant : ");
            gets(m.nom);
        }while(strlen(m.nom)>29);
        do{
            fflush(stdin);
            puts("Saisir le prenom de l'employe : ");
            gets(m.prenom);
        }while(strlen(m.prenom)>29);
        m.prenom[0]=toupper(m.prenom[0]);
        do{
            fflush(stdin);
            puts("Saisir l'origine de l'employe : ");
            scanf("%s",&m.origine);
        }while(strcasecmp(m.origine,"thies")!=0 && strcasecmp(m.origine,"louga")!=0 && strcasecmp(strlwr(m.origine),"matam")!=0);
        do{
            fflush(stdin);
            puts("Saisir l'age de l'employe : ");
            scanf("%d",&m.age);
        }while(m.age<0);
        sprintf(m.code,"%c%c%c%s",tolower(m.nom[0]),tolower(m.prenom[0]),tolower(m.prenom[1]),(m.age>=18)?"MJ":"MN");
        if(strcasecmp(m.origine,"thies")==0){
            printf("Nom : %s\nPrenom : %s\nOrigine : %s\nAge : %d\nCode : %s\n",strupr(m.nom),m.prenom,m.origine,m.age,m.code);
        }
        if(i==1){
            m1=m;
            m2=m;
        }else{
            if(m1.age<m.age){
                a=m1;
                m1=m;
                m2=a;
            }


        }
        if(tolower(m.prenom[0])=='m' && tolower(m.prenom[strlen(m.prenom)-1])=='e'){
            sA+=m.age;
        }


    }
    puts("Mendiant 1 Plus ages");
    printf("Nom : %s\nPrenom : %s\nOrigine : %s\nAge : %d\nCode : %s\n",strupr(m1.nom),m1.prenom,m1.origine,m1.age,m1.code);
    puts("Mendiant 2 plus ages");
    printf("Nom : %s\nPrenom : %s\nOrigine : %s\nAge : %d\nCode : %s\n",strupr(m2.nom),m2.prenom,m2.origine,m2.age,m2.code);
    printf("Le total d'age des mendiants dont le prenom commence par m et se termine par e est %d\n",sA);
    return 0;
}
