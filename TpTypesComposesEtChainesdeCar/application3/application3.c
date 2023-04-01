#include <stdio.h>
#include <string.h>

typedef struct Etudiant {
    char prenom[20];
    char nom[20];
    char matricule[20];
    float moyenne;
};

int main() {
    int k;

    printf("Combien d'etudiants voulez-vous saisir ? ");
    scanf("%d", &k);

    struct Etudiant etudiant_max, etudiant_min;
    float moyenne_max = 0, moyenne_min = 20;
    char nom_min[20] = "@@@";

    for (int i = 0; i < k; i++) {
        struct Etudiant etudiant;

        printf("\nSaisir les donnees de l'etudiant %d :\n", i + 1);
        printf("Prenom : ");
        scanf("%s", etudiant.prenom);
        printf("Nom : ");
        scanf("%s", etudiant.nom);
        printf("Moyenne : ");
        scanf("%f", &etudiant.moyenne);

        // Génération du matricule
        int len_nom = strlen(etudiant.nom);
        int len_prenom = strlen(etudiant.prenom);
        char nom3[4];
        strncpy(nom3, etudiant.nom, 3);
        nom3[3] = '\0';
        char matricule[20];
        if (len_nom >= 3) {
            sprintf(matricule, "%c%s%d", etudiant.prenom[0], nom3, len_nom + len_prenom);
        } else {
            sprintf(matricule, "%c%s%d", etudiant.prenom[0], strcat(nom3, "@"), len_nom + len_prenom);
        }
        strcpy(etudiant.matricule, matricule);

        // Mise à jour de l'étudiant ayant la plus grande moyenne
        if (etudiant.moyenne > moyenne_max) {
            moyenne_max = etudiant.moyenne;
            etudiant_max = etudiant;
        }

        // Mise à jour de l'étudiant ayant la plus petite moyenne
        if (etudiant.moyenne < moyenne_min) {
            moyenne_min = etudiant.moyenne;
            etudiant_min = etudiant;
            strncpy(nom_min, etudiant.nom, 3);
            nom_min[3] = '\0';
        } else if (etudiant.moyenne == moyenne_min && strncmp(etudiant.nom, nom_min, 3) < 0) {
            etudiant_min = etudiant;
            strncpy(nom_min, etudiant.nom, 3);
            nom_min[3] = '\0';
        }
    }

    // Affichage des données de l'étudiant ayant la plus grande moyenne
    printf("\nEtudiant avec la plus grande moyenne :\n");
    printf("Nom : %s\n", etudiant_max.nom);
    printf("Prenom : %s\n", etudiant_max.prenom);
    printf("Matricule : %s\n", etudiant_max.matricule);
    printf("Moyenne : %.2f\n", etudiant_max.moyenne);

    // Affichage des données de l'étudiant ayant la plus petite moyenne
    printf("\nEtudiant avec la plus petite moyenne :\n");
    printf("Nom : %s\n", etudiant_min.nom);
    printf("Prenom : %s\n",etudiant_min.prenom);
    printf("Matricule : %s\n", etudiant_min.matricule);
    printf("Moyenne : %.2f\n", etudiant_min.moyenne);
    return 0;
}
