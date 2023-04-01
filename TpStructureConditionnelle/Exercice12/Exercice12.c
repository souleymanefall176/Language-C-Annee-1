#include <stdio.h>
#include <stdlib.h>

int main()
{

    int heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive, heureDuree, minuteDuree, secondeDuree;

    printf("Veuillez saisir l'heure de depart : ");
    scanf("%d:%d:%d", &heureDepart, &minuteDepart, &secondeDepart);
    printf("Veuillez saisir l'heure d'arrivee : ");
    scanf("%d:%d:%d", &heureArrive, &minuteArrive, &secondeArrive);

   if (heureArrive>heureDepart){

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
    } else {
        if (minuteDepart==0  && secondeDepart==0){
            heureDuree=(24-heureDepart)+heureArrive;
            minuteDuree=minuteArrive+minuteDepart;
            secondeDuree=secondeDepart+secondeArrive;
        } else if (minuteDepart>0 && secondeDepart==0){
            heureDuree=(24-heureDepart - 1)+heureArrive;
            minuteDuree=(60-minuteDepart)+minuteArrive;
            secondeDuree=secondeDepart+secondeArrive;
        } else if (minuteDepart>=0 && secondeDepart>0){
            heureDuree=(24-(heureDepart-1))+heureArrive;
            minuteDuree=(60-(minuteDepart-1))+minuteArrive;
            secondeDuree=(60-secondeDepart)+secondeArrive;
        }
        if (secondeDuree>=60){
            secondeDuree=secondeDuree-60;
            minuteDuree+=1;
            if (minuteDuree>=60){
                minuteDuree=minuteDuree-60;
                heureDuree+=1;
            }
        }
   }
    printf("Heure de Depart : %dh - %dmin - %ds \nHeure de d'Arrivee : %dh - %dmin - %ds \nDuree : %dh - %dmin - %ds", heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive, heureDuree, minuteDuree, secondeDuree);

    return 0;
}
