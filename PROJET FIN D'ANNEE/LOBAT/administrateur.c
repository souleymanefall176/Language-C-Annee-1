#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "lobat.h"

//CHOIX ADMINISTRATEUR DEBUT
void choixAdministrateur(){
    int choice1,choice2;
    char loginSelectionne[20], idSelectionne[20];
    do{
        printf("Choix : ");
        choice1=choix();
    }while(choice1<0 || choice1>4);
    switch(choice1){
        case 1 :
            choixAdmin1();
            do{
                printf("Choix : ");
                choice2=choix();
            }while(choice2<0 || choice2>3);
            switch(choice2){
                case 1:
                    inscription();
                    accueilAdministrateur();
                    break;
                case 2:
                    afficherLoginsMenuMod(loginSelectionne);
                    Sleep(2000);
                    system("cls");
                    accueilAdministrateur();
                    break;
                case 3:
                    afficherLoginsMenuSupr(loginSelectionne);
                    Sleep(2000);
                    system("cls");
                    accueilAdministrateur();
                    break;
                default:
                    accueilAdministrateur();
            }
            break;
        case 2:
            choixAdmin2();
            do{
                printf("Choix : ");
                choice2=choix();
            }while(choice2<0 || choice2>2);
            switch(choice2){
                case 1:
                    ajouterBailleur();
                    accueilAdministrateur();
                    break;
                case 2:
                    afficherIdMenuModBailleur(idSelectionne);
                    Sleep(2000);
                    system("cls");
                    accueilAdministrateur();
                    break;
                default:
                    accueilAdministrateur();
            }
            break;

        case 3:
            choixAdmin3();

            do{
                printf("Choix : ");
                choice2=choix();
            }while(choice2<0 || choice2>2);
            switch(choice2){
                case 1:
                    ajouterLocation();
                    accueilAdministrateur();
                    break;
                case 2:
                    afficherIdMenuModLocation(idSelectionne);
                    Sleep(2000);
                    system("cls");
                    accueilAdministrateur();
                default:
                    accueilAdministrateur();
                }
                break;
        default:
            puts("Vous allez etre deconnecter dans 2 secondes");
            Sleep(2000);
            system("cls");
            accueil();
    }
}
//CHOIX ADMINISTRATEUR FIN


//ACCUEIL ADMINISTRATEUR DEBUT

void accueilAdministrateur(){
    puts("MENU : ");
    printf("\t1-Creer/Modifier/Supprimer un Utilisateur\n");
    printf("\t2-Ajouter/Modifier un Bailleur\n");
    printf("\t3-Ajouter/Modifier une Location\n");
    printf("\t0-Deconnexion\n");
    choixAdministrateur();
    Sleep(2000);
    system("cls");

}

void choixAdmin1(){
    puts("GESTION D'UTILISATEUR");
    printf("\t1-Creer un Utilisateur\n");
    printf("\t2-Modifier un Utilisateur\n");
    printf("\t3-Supprimer un Utilisateur\n");
    printf("\t0-Quitter\n");
}

void choixAdmin2(){
    printf("\t1-Ajouter Bailleur\n");
    printf("\t2-Modifier Bailleur\n");
    printf("\t0-Quitter\n");

}

void choixAdmin3(){
    printf("\t1-Ajouter Location\n");
    printf("\t2-Modifier Location\n");
    printf("\t0-Quitter\n");
}


//ACCUEIL ADMINISTRATEUR FIN




void afficherMenuLogin() {
    FILE* file = fopen("user.bin", "rb");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    USER user;
    int index = 1;

    printf("========== MENU ==========\n");
    printf("Liste des logins d'utilisateurs :\n");

    while (fread(&user, sizeof(USER), 1, file) == 1) {
        printf("%d. %s\n", index, user.login);
        index++;
    }

    printf("0. Accueil\n");
    printf("==========================\n");

    fclose(file);
}
//choixMenu
void faireChoixUtilisateur(char loginSelectionne[]) {
    int choix;
    printf("Choisissez un utilisateur (0 pour quitter) : ");
    scanf("%d", &choix);

    if (choix != 0) {
        FILE* file = fopen("user.bin", "rb");
        if (file == NULL) {
            printf("Erreur lors de l'ouverture du fichier.\n");
            return;
        }

        USER user;
        int index = 1;

        while (fread(&user, sizeof(USER), 1, file) == 1) {
            if (index == choix) {
                fclose(file);
                strcpy(loginSelectionne, user.login);
                return;
            }
            index++;
        }

        fclose(file);

        printf("Choix invalide.\n");
    }else{
        accueilAdministrateur();
    }
}
 //MODIFIER UTILISATEUR DEBUT
 void modifierUtilisateur(char login[] ) {
    //char nom[20],prenom[20],password[65],tel[10],email[75],userType[15];
    int i=0;
    incrementerUser(&i);
    FILE* file = fopen("user.bin", "r+b");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    USER user;
    int index = 1;

    while (fread(&user, sizeof(USER), 1, file) == 1) {
        if (strcmp(user.login, login) == 0) {
            fseek(file, -sizeof(USER), SEEK_CUR);
            do{
                fflush(stdin);
                printf("Nouveau nom : ");
                gets(user.nom);
                if(myStrlen(user.nom)>19 || verifLetter(user.nom)){
                    printf("Erreur : Veuillez reessayer\n");
                }
            }while(myStrlen(user.prenom)>19 || verifLetter(user.prenom)!=0);
            do{
                fflush(stdin);
                printf("Nouveau Prenom : ");
                gets(user.prenom);
                if(myStrlen(user.prenom)>19 || verifLetter(user.prenom)){
                    printf("Erreur : Veuillez reessayer\n");
                }
            }while(myStrlen(user.prenom)>19 || verifLetter(user.prenom)!=0);
            sprintf(user.login,"U%c%c%c%c%d",myUpperCase(user.prenom[0]),myUpperCase(user.nom[0]),myUpperCase(user.nom[1]),(myStrlen(user.nom)>3)?myUpperCase(user.nom[2]):'@',i);
            printf("Login : %s\n",user.login);
            do{
                fflush(stdin);
                printf("Password : ");
                gets(user.password);//à hacher

            }while(verifierMotDePasse(user.password)!=0);
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
            do{
                fflush(stdin);
                printf("Type d'utilisateur : ");
                gets(user.typeUser);
                if(strcasecmp(user.typeUser,"administrateur")!=0 && strcasecmp(user.typeUser,"gestionnaire")!=0){
                    printf("Utilisateur indisponible(administrateur/gestionnaire)");
                }

            }while(strcasecmp(user.typeUser,"administrateur")!=0 && strcasecmp(user.typeUser,"gestionnaire")!=0);
            fseek(file, 0, SEEK_CUR);
            fwrite(&user, sizeof(USER), 1, file);
            fclose(file);
            printf("Utilisateur modifie avec succes.\n");
            return;
        }


        index++;
    }

    fclose(file);
}
 //MODIFIER UTILISATEUR FIN

 //SUPPRIMER UTILISATEUR DEBUT

 void supprimerUtilisateur(char login[]) {
    FILE* file = fopen("user.bin", "rb");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    FILE* tempFile = fopen("temp.bin", "wb");
    if (tempFile == NULL) {
        printf("Erreur lors de l'ouverture du fichier temporaire.\n");
        fclose(file);
        return;
    }

    USER user;

    while (fread(&user, sizeof(USER), 1, file) == 1) {
        if (strcmp(user.login, login) != 0) {
            fwrite(&user, sizeof(USER), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    if (remove("user.bin") != 0) {
        printf("Erreur lors de la suppression du fichier.\n");
        return;
    }

    if (rename("temp.bin", "user.bin") != 0) {
        printf("Erreur lors du renommage du fichier temporaire.\n");
        return;
    }

    printf("L'utilisateur avec le login '%s' a ete supprime.\n", login);
}

 //SUPPRIMER UTILISATEUR FIN

//afficher Menu
void afficherLoginsMenuSupr(char loginSelectionne[]) {
    afficherMenuLogin();
    faireChoixUtilisateur(loginSelectionne);
    supprimerUtilisateur(loginSelectionne);
    Sleep(2000);
    system("cls");
}
void afficherLoginsMenuMod(char loginSelectionne[]) {
    afficherMenuLogin();
    faireChoixUtilisateur(loginSelectionne);
    Sleep(2000);
    system("cls");
    modifierUtilisateur(loginSelectionne);

}

