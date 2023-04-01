#include <stdio.h>
#include <stdlib.h>

int main()
{

    int heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive, heureDuree, minuteDuree, secondeDuree;

    printf("Veuillez saisir l'heure de depart dans la meme journee : ");
    scanf("%d %d %d", &heureDepart, &minuteDepart, &secondeDepart);
    printf("Veuillez saisir l'heure d'arrivee dans la meme journee : ");
    scanf("%d %d %d", &heureArrive, &minuteArrive, &secondeArrive);

    if (minuteArrive>=minuteDepart && secondeArrive>=secondeDepart)
    {
        heureDuree=heureArrive-heureDepart;
        minuteDuree=minuteArrive-minuteDepart;
        secondeDuree=secondeArrive-secondeDepart;
    }
    else if (minuteArrive<minuteDepart && secondeArrive>=secondeDepart)
    {
        heureDuree=(heureArrive-1)-heureDepart;
        minuteDuree=(minuteArrive+60)-minuteDepart;
        secondeDuree=secondeArrive-secondeDepart;
    }
    else if (minuteArrive>=minuteDepart && secondeArrive<secondeDepart)
    {
        heureDuree=heureArrive-heureDepart;
        minuteDuree=(minuteArrive-1)-minuteDepart;
        secondeDuree=(secondeArrive+60)-secondeDepart;
    }
    else if (minuteArrive<minuteDepart && secondeArrive<secondeDepart)
    {
        heureDuree=(heureArrive-1)-heureDepart;
        minuteDuree=(minuteArrive+60-1)-minuteDepart;
        secondeDuree=(secondeArrive+60)-secondeDepart;
    }

    printf("Heure de Depart : %dh - %dmin - %ds \nHeure d'Arrivee : %dh - %dmin - %ds \nDuree : %dh - %dmin - %ds", heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive, heureDuree, minuteDuree, secondeDuree);

    return 0;
    /* int heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive,heureSDepart, minuteSDepart, secondeSDepart,heureSArrive, minuteSArrive, secondeSArrive,dureeSeconde, heureDuree, minuteDuree, secondeDuree;

    printf("Veuillez saisir l'heure de depart : ");
    scanf("%d %d %d", &heureDepart, &minuteDepart, &secondeDepart);
    printf("Veuillez saisir l'heure d'arrivee : ");
    scanf("%d %d %d", &heureArrive, &minuteArrive, &secondeArrive);

    heureSDepart=heureDepart*3600;
    minuteSDepart=minuteDepart*60;
    secondeSDepart=secondeDepart*60;


    heureSArrive=heureArrive*3600;
    minuteSArrive=minuteArrive*60;
    secondeSArrive=secondeArrive*60;

    dureeSeconde=(heureSArrive+minuteSArrive+secondeSArrive)-(heureSDepart+minuteSDepart+secondeSDepart);

    heureDuree=(dureeSeconde%86400)/3600;
    minuteDuree=((dureeSeconde%86400)%3600)/60;
    secondeDuree=((dureeSeconde%86400)%3600)%60;

    printf("Heure de Depart : %d h - %d min - %d s \t Heure de d'Arrvee : %d h - %d min - %d s \t Duree : %d h - %d min - %d s", heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive, heureDuree, minuteDuree, secondeDuree);
*/
}
