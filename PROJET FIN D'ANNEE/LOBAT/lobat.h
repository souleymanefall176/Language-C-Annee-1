#ifndef LOBAT_H_INCLUDED
#define LOBAT_H_INCLUDED

//====================DEFINITION DES STRUCTURES DEBUT====================
char cpyIdGestionnaire[20];
//ENUMERATION TYPELOGEMENT DEBUT
enum TypeLogement {
    MAISON,
    APPARTEMENT,
    STUDIO,
};
//ENUMERATION TYPELOGEMENT FIN

//ENUMERATION TYPEUSERS DEBUT
enum TypeUtilisateur {
    ADMINISTRATEUR,
    GESTIONNAIRE,
};
//ENUMERATION TYPEUSERS FIN

//DATE DEBUT
typedef struct{
    int jours,mois,annee;
}DATES;
//DATE FIN


//ADRESSE DEBUT
    /*
        une adresse sera compose du nom du pays, de la region, du departement et de la commune.
    */
typedef struct{
    char pays[20];
    char region[20];
    char departement[20];
    char commune[20];
}ADRESSE;


//ADRESSE FIN

//UTILISATEUR DEBUT
typedef struct{
    char id[20];//l'id sera genere de la composition de mon choix,donc taille à modifier
    char nom[20];
    char prenom[20];
    char login[50];//a generer
    char password[65];//à controler min: 8 caracteres et max : 64 caracteres (lettre majuscule,minuscule,chiffre et caractere speciale)
    char tel[10];//j'envisage d'y inclure l'indicatif
    char email[75];//64 caracteres + 10 : "@gmail.com"
    char typeUser[15];
}USER;
//UTILISATEUR FIN

//BAILLEUR DEBUT
typedef struct{
    char id[20];//l'id sera genere de la composition de mon choix,donc taille à modifier
    char nom[20];
    char prenom[20];
    ADRESSE adresse;
    char tel[10];//j'envisage d'y inclure l'indicatif
    char CIN[14];//le CIN est composé de 13 chiffres
}BAILLEUR;
//BAILLEUR FIN

//CLIENT DEBUT
typedef struct{
    char id[20];//l'id sera genere de la composition de mon choix,donc taille à modifier
    char nom[20];
    char idGestionnaire[20];
    char prenom[20];
    char tel[10];//j'envisage d'y inclure l'indicatif
    char email[75];//64 caracteres + 10 : "@gmail.com"
    char CIN[14];//le CIN est composé de 13 chiffres
}CLIENT;
//CLIENT DEBUT


//LOCATION DEBUT
typedef struct{
    char id[20];//l'id sera genere de la composition de mon choix,donc taille à modifier
    char libelle[20];
    char idBailleur[20];
    ADRESSE adresse;
    char typeLogement[12];
    float prix;
}LOCATION;
//LOCATION FIN

//CONTRAT DEBUT
typedef struct{
    char id[20];//l'id sera genere de la composition de mon choix,donc taille à modifier
    DATES date_DEB;
    DATES date_FIN;//parceque c'est vide au debut
    char modePaiement;//j'envisage de faire un menu l'utilisateurs aura le choix de choisir et chaque valeur aura une reference en chaine de caractere
}CONTRAT;
//CONTRAT FIN

//PAIENMENT DEBUT
typedef struct{
    char id[20];//l'id sera genere de la composition de mon choix,donc taille à modifier
    DATES datePaiement;
}PAIEMENT;
//PAIENMENT DEBUT


//=====================DEFINITION DES STRUCTURES FIN=====================


//=====================DEFINITION DES PROTOTYPES DEBUT===================

//PROTOTYPE FONCTION DE CONTROLE DEBUT
int verifInt(char[]);
int verifPhoneNumber(char[]);
int myStrlen(char[]);
char myLowerCase(char);
char myUpperCase(char);
int myStrCmp(char[], char[]);
int myStrnCmp(char[], char[],int);
int myStrCaseCmp(char[], char[]);
void incrementerUser(int*);
void incrementerBailleur(int*);
void incrementerLocation(int*);
void incrementerClient(int*);
int myStrStr(char[], char[]);
int verifMail(char[]);
int verifLetter(char[]);
int verifCIN(char[]);

//PROTOTYPE FONCTION DE CONTROLE FIN

//PROTOTYPE LOBAT DEBUT
//UTILISATEUR DEBUT
void accueil();
void choixConnecte(int);
int choix();
int connexion();
void inscription();
void accueilAdministrateur();
void choixAdministrateur();
void supprimerUtilisateur(char[]);
void modifierUtilisateur(char[]);
void afficherMenuLogin();
void faireChoixUtilisateur(char[]);
void afficherLoginsMenuSupr(char[]);
void afficherLoginsMenuMod(char[]);
void accueilGestionnaire();
void choixGestionnaire();
void choixAdmin1();
void choixAdmin2();
void choixAdmin3();
int verifFile(FILE*);
int verifierMotDePasse(char[]);
int connected(FILE*, char[],char[]);
int verifTypeUser(FILE*, char[]);
void typeUser(USER);

//UTILISATEUR FIN
//BAILLEUR DEBUT
void ajouterBailleur();
void afficherIdMenuModBailleur(char[]);
void afficherMenuBailleur();
void faireChoixBailleur(char[]);
 void modifierBailleur(char[]);
//BAILLEUR FIN

//LOCATION DEBUT
void ajouterLocation();
void afficherMenuLocation();
void faireChoixLocation(char[]);
void modifierLocation(char[] );
void afficherIdMenuModLocation(char[]);

//LOCATION FIN

//CLIENT DEBUT
void ajouterClient();

//CLIENT FIN

//PROTOTYPE LOBAT FIN

//=====================DEFINITION DES PROTOTYPES FIN=====================
#endif // LOBAT_H_INCLUDED
