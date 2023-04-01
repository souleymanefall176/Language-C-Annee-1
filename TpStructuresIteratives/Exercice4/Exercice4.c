#include <stdio.h>

int main(){

    int jours, mois, annees;
    do{
        do{
            do{
                do{
                    printf("Veuillez saisir une date aux formats JJ MM AAAA separees par une espace : ");
                    scanf("%d %d %d", &jours, &mois, &annees);
                }while(!((annees%4==0 && annees%100!=0)  || (annees%400==0)) && (jours>28 && mois==2));
            }while(((annees%4==0 && annees%100!=0)  || (annees%400==0)) && (jours>29 && mois==2));
        }while((mois==4 || mois==6 || mois==9 || mois==11) && jours>30);
    }while((jours<=0 || jours>31) || (mois<=0 || mois>12)  || annees<0);
    printf("La date est valide");


    return 0;
}
