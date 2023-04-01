#include <stdio.h>

int main(){
    int nbrjr, annee, mois, semaine, jours;

    printf("Saisir le nombre de jours : ");
    scanf("%d", &nbrjr);
    printf("Vous avez saisi %d jours.\n", nbrjr);
    annee=nbrjr/365;
    mois=(nbrjr%365)/30;
    semaine=(nbrjr%365)%30/7;
    jours=((nbrjr%365)%30)%7;
    printf("%d jours = %d ans %d mois %d semaines %d jours \n", nbrjr, annee, mois, semaine, jours);

return 0;



return 0;
}
