#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "lobat.h"

/*
    Dans cette page nous allons mettre toutes les fonctions et procedures de creation d'utilisateurs
*/


void inscription(){
    USER user;
    FILE *file = NULL;
    int i=0;
    incrementerUser(&i);
    puts("============================== INSCRIPTION ==============================");
    do{
        fflush(stdin);
        printf("Nom : ");
        gets(user.nom);
        if(myStrlen(user.nom)>19 || verifLetter(user.nom)){
            printf("Erreur : Veuillez reessayer\n");
        }
    }while(myStrlen(user.nom)>19 || verifLetter(user.nom)!=0);
    do{
        fflush(stdin);
        printf("Prenom : ");
        gets(user.prenom);
        if(myStrlen(user.prenom)>19 || verifLetter(user.prenom)){
            printf("Erreur : Veuillez reessayer\n");
        }
    }while(myStrlen(user.prenom)>19 || verifLetter(user.prenom)!=0);
    sprintf(user.id,"U%c%c%c%c%d",myUpperCase(user.prenom[0]),myUpperCase(user.nom[0]),myUpperCase(user.nom[1]),(myStrlen(user.nom)>3)?myUpperCase(user.nom[2]):'@',i);
    do{
        fflush(stdin);
        printf("Password : ");
        gets(user.password);//à hacher

    }while(verifierMotDePasse(user.password)!=0);
    do{
        fflush(stdin);
        printf("Tel : ");
        gets(user.tel);
        if(verifPhoneNumber(user.tel)!=0){
            puts("Numero de Telephone incorrecte");
        }
    }while(verifPhoneNumber(user.tel)!=0);
    do{
        fflush(stdin);
        printf("Email : ");
        gets(user.email);
        if(verifMail(user.email)!=0){
            puts("Adresse Mail incorrecte");
        }
    }while(verifMail(user.email)!=0);
    if(verifFile(file)==1){
        strcpy(user.typeUser,"administrateur");
    }else{
        do{
            fflush(stdin);
            printf("Type d'utilisateur : ");
            gets(user.typeUser);
            if(strcasecmp(user.typeUser,"administrateur")!=0 && strcasecmp(user.typeUser,"gestionnaire")!=0){
                printf("Utilisateur indisponible(administrateur/gestionnaire)");
            }

        }while(strcasecmp(user.typeUser,"administrateur")!=0 && strcasecmp(user.typeUser,"gestionnaire")!=0);
    }
    sprintf(user.login,"%c%s%s%d",(strcasecmp(user.typeUser,"administrateur")==0)?'A':'G',strupr(user.prenom),strupr(user.nom),i);
    printf("Login : %s\n",user.login);


    file=fopen("user.bin","ab");
    fwrite(&user,sizeof(USER),1,file);
    fclose(file);
    puts("Compte cree avec succe!!!");
    Sleep(4000);
    system("cls");

}
