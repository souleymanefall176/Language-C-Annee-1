#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "lobat.h"



//CHOIX GESTIONNAIRE DEBUT
void choixGestionnaire(){
    int choice1;
    do{
        printf("Choix : ");
        choice1=choix();
    }while(choice1<0 || choice1>5);
    switch(choice1){
        case 1 :
            ajouterClient();
            accueilGestionnaire();
            break;
        case 2:
            printf("\t2-Ajouter un contrat\n");
            break;
        case 3:
            printf("\t3-Enregistrer un payement\n");
            break;
        case 4:
            printf("\t4-Lister Informations\n");
            break;
        default:
            puts("Vous allez etre deconnecter dans 2 secondes");
            Sleep(2000);
            system("cls");
            accueil();
    }
}
//CHOIX GESTIONNAIRE FIN

//ACCUEIL GESTIOONAIRE DEBUT

void accueilGestionnaire(){

    puts("MENU : ");
    printf("\t1-Ajouter un nouveau Client\n");
    printf("\t2-Ajouter un contrat\n");
    printf("\t3-Enregistrer un payement\n");
    printf("\t4-Lister Informations\n");
    printf("\t0-Deconnexion\n");
    choixGestionnaire();
    Sleep(2000);
    system("cls");
}
//ajouter un nouveau client

void ajouterClient(){
    CLIENT cl;
    int c = 0;
    incrementerClient(&c);
    puts("============================== NOUVEAU CLIENT ==============================");

    do{
        fflush(stdin);
        printf("Nom : ");
        gets(cl.nom);
        if(myStrlen(cl.nom)>19 || verifLetter(cl.nom)){
            printf("Erreur : Veuillez reessayer\n");
        }
    }while(myStrlen(cl.nom)>19 || verifLetter(cl.nom)!=0);
    do{
        fflush(stdin);
        printf("Prenom : ");
        gets(cl.prenom);
        if(myStrlen(cl.prenom)>19 || verifLetter(cl.prenom)){
            printf("Erreur : Veuillez reessayer\n");
        }
    }while(myStrlen(cl.prenom)>19 || verifLetter(cl.prenom)!=0);
    do{
        fflush(stdin);
        printf("Tel : ");
        gets(cl.tel);
        if(verifPhoneNumber(cl.tel)!=0){
            puts("Numero de Telephone incorrecte");
        }
    }while(verifPhoneNumber(cl.tel)!=0);
    do{
        fflush(stdin);
        printf("Email : ");
        gets(cl.email);
        if(verifMail(cl.email)!=0){
            puts("Adresse Mail incorrecte");
        }
    }while(verifMail(cl.email)!=0);
    do{
        fflush(stdin);
        printf("CIN : ");
        gets(cl.CIN);
        if(verifCIN(cl.CIN)!=0){
            puts("CIN incorrecte");
        }
    }while(verifCIN(cl.CIN)!=0);
    strcpy(cl.idGestionnaire,cpyIdGestionnaire);
    sprintf(cl.id,"C%c%c%c%c%d",myUpperCase(cl.prenom[0]),myUpperCase(cl.nom[0]),myUpperCase(cl.nom[1]),(myStrlen(cl.nom)>3)?myUpperCase(cl.nom[2]):'@',c);
    printf("ID : %s\n",cl.id);
    FILE *file=fopen("client.bin","ab");
    fwrite(&cl,sizeof(CLIENT),1,file);
    fclose(file);
    puts("client ajouter avec succe!!!");
    Sleep(2000);
    system("cls");
}
