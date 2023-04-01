#include <stdio.h>
#include <stdlib.h>

int main()
{
   int heureArrive,heureDepart,minuteArrive,minuteDepart,secondeArrive,secondeDepart,dureeHeure,dureeMinute,dureeSeconde;

   do{

        printf("Veuillez saisir l'heure de depart au format h mn s : ");
        scanf("%d %d %d",&heureDepart,&minuteDepart,&secondeDepart);

   }while((heureDepart<0 || heureDepart>23) || (minuteDepart<0 || minuteDepart>60) || (secondeDepart<0 || secondeDepart>60) );

   do{

        printf("Veuillez saisir l'heure d'arrivée au format h mn s : ");
        scanf("%d %d %d",&heureArrive,&minuteArrive,&secondeArrive);

   }while((heureArrive<0 || heureArrive>23) || (minuteArrive<0 || minuteArrive>60) || (secondeArrive<0 || secondeArrive>60) );
   if (heureArrive>heureDepart){

        if (minuteArrive>=minuteDepart && secondeArrive>=secondeDepart)
        {
            dureeHeure=heureArrive-heureDepart;
            dureeMinute=minuteArrive-minuteDepart;
            dureeSeconde=secondeArrive-secondeDepart;
        }
        else if (minuteArrive<minuteDepart && secondeArrive>=secondeDepart)
        {
            dureeHeure=(heureArrive-1)-heureDepart;
            dureeMinute=(minuteArrive+60)-minuteDepart;
            dureeSeconde=secondeArrive-secondeDepart;
        }
        else if (minuteArrive>=minuteDepart && secondeArrive<secondeDepart)
        {
            dureeHeure=heureArrive-heureDepart;
            dureeMinute=(minuteArrive-1)-minuteDepart;
            dureeSeconde=(secondeArrive+60)-secondeDepart;
        }
        else if (minuteArrive<minuteDepart && secondeArrive<secondeDepart)
        {
            dureeHeure=(heureArrive-1)-heureDepart;
            dureeMinute=(minuteArrive+60-1)-minuteDepart;
            dureeSeconde=(secondeArrive+60)-secondeDepart;
        }
    } else {
        if (minuteDepart==0  && secondeDepart==0){
            dureeHeure=(24-heureDepart)+heureArrive;
            dureeMinute=minuteArrive+minuteDepart;
            dureeSeconde=secondeDepart+secondeArrive;
        } else if (minuteDepart>0 && secondeDepart==0){
            dureeHeure=(24-heureDepart + 1)+heureArrive;
            dureeMinute=(60-minuteDepart)+minuteArrive;
            dureeSeconde=secondeDepart+secondeArrive;
        } else if (minuteDepart>=0 && secondeDepart>0){
            dureeHeure=(24-(heureDepart+1))+heureArrive;
            dureeMinute=(60-(minuteDepart+1))+minuteArrive;
            dureeSeconde=(60-secondeDepart)+secondeArrive;
        }
        if (dureeSeconde>=60){
            dureeSeconde=dureeSeconde-60;
            dureeMinute+=1;
            if (dureeMinute>=60){
                dureeMinute=dureeMinute-60;
                dureeHeure+=1;
            }
        }
   }
    printf("Heure de Depart : %dh - %dmin - %ds \nHeure de d'Arrivee : %dh - %dmin - %ds \nDuree : %dh - %dmin - %ds", heureDepart, minuteDepart, secondeDepart,heureArrive, minuteArrive, secondeArrive, dureeHeure, dureeMinute, dureeSeconde);
   return 0;
}
