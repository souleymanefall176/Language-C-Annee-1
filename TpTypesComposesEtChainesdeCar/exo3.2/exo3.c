#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char nom[30],prenom[30],code[50],origine[30];
    int age;
}MENDIANT;
enum region  {LOUGA=1,THIES,MATAM};
int main(){

    MENDIANT m,m1,m2,a;
    int i,N,som=0,nbr=0,sA=0,choix,reste,val,cpt1,cpt2,cpt,verif;
    char chaine[200],str[10];

    do{
        puts("Saisir le nombre de mendiant : ");
        scanf("%d",&N);
        sprintf(str,"%s",N);
        printf("%s\n",str);

    }while(N<=2);
    printf("%d",N);


    /*for(i=1;i<=N;i++){
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
        printf("Menu\n1-LOUGA\n2-THIES\n3-MATAM\n");
        do{
            fflush(stdin);
            puts("Saisir choix");
            scanf("%d",&choix);
        }while(choix!=1 || choix!=2 || choix!=3);
        switch (choix){
        case LOUGA:
            strcpy(m.origine,"LOUGA");
            break;
        case THIES:
            strcpy(m.origine,"THIES");
            break;
        case MATAM:
            strcpy(m.origine,"MATAM");
            break;
        }

        do{
            fflush(stdin);
            puts("Saisir l'age de l'employe : ");
            scanf("%d",&m.age);
        }while(m.age<0);
        sprintf(m.code,"%c%c%c%s",m.nom[0],m.prenom[0],m.prenom[1],(m.age>=18)?"MJ":"MN");
        if(strcasecmp(m.origine,"THIES")==0){
            printf("Nom : %s\nPrenom : %s\nOrigine : %s\nAge : %d\nCode : %s\n",strupr(m.nom),m.prenom,m.origine,m.age,m.code);
        }
        if(i==1){
            m1=m;
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


    }*/
}






























#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[20];
    int num;

    printf("Veuillez saisir un entier : ");
    fgets(input, sizeof(input), stdin);

    // Convertir la chaîne de caractères en un entier avec strtol
    char* endptr;
    num = strtol(input, &endptr, 10);

    // Vérifier si la conversion a réussi
    if (input[0] != '\n' && endptr != input && *endptr == '\n') {
        // La conversion a réussi
        char str[20];
        sprintf(str, "%d", num);
        printf("La chaîne de caractères correspondante est : %s\n", str);
    } else {
        // La conversion a échoué
        printf("Saisie invalide !\n");
    }

    return 0;
}

