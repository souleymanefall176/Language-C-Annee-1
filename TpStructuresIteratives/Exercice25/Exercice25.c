#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
int main (){
    int nombreMystere = 0, nombreEntre = 0;
    /*const int MAX = 100, MIN = 1;
    // G�n�ration du nombre al�atoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + M
    no
    /* La boucle du programme. Elle se r�p�te tant que
    l'utilisateur n'a pas trouv� le nombre myst�re */
    nombreMystere=random(10);
    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);
        // On compare le nombre entr� avec le nombre myst�re
        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
        printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere!!!\n\n");
    } while (nombreEntre != nombreMystere);
    return 0;
}
