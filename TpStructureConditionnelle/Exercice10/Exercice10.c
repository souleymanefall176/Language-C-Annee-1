#include <stdio.h>
#include <stdlib.h>

int main(){
    int heure, minute, seconde;

    printf("Veuillez saisir l'heure : ");
    scanf("%d", &heure);
    printf("Veuillez saisir la minute : ");
    scanf("%d", &minute);
    printf("Veuillez saisir la seconde : ");
    scanf("%d", &seconde);

/*
    seconde+=1;
    if (seconde==60){
        seconde=0;
        minute+=1;
        if (minute==60){
            minute=0;
            heure+=1;
            if (heure==24){
                heure=0;
            }
        }
    }
*/

    if(heure==23 && minute==59 && seconde==59){
        heure=0;
        minute=0;
        seconde=0;
    }else if (minute==59 && seconde==59){
        heure+=1;
        minute=0;
        seconde=0;
    }else if (seconde==59){
        heure=heure;
        minute+=1;
        seconde=0;
    }else if (seconde<59) {
        seconde+=1;
    }
    printf("Dans une seconde : ");
    printf("%d h - %d mn - %d s", heure, minute, seconde);
}


