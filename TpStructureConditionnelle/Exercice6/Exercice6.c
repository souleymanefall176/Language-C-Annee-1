#include <stdio.h>
#include <stdlib.h>

int main(){
    char programme[100];
    int note;


    printf("Veuillez saisir le nom du Programme : ");
    scanf("%s", &programme);

    printf("Veuillez saisir la note : ");
    scanf("%d", &note);

    if (note<10){
        printf("Insuffisant");
    }else if (note>=10 && note<=11){
        printf("Passable");
    }else if (note>=12 && note<=13){
        printf("Assez bien");
    }else if (note>=14 && note<=15){
        printf("Bien");
    }else if (note>=16 && note<=20){
        printf("Tres Bien");
    }

}
