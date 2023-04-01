#include <stdio.h>
 int main()
 {
     char nom1[15], nom2[15], nom3[15], nom4[15];
     float score1,score2,score3,score4;
     printf("=== Elections Legislatives Guignolerie Septentrionale ===\n");
     printf("Veuillez saisir le nom de chacun des candidats.\n");
     scanf("%s%s%s%s", &nom1,&nom2,&nom3,&nom4);
     printf("Veuillez saisir le score de chacun des 4 candidats.\n");
     printf("%s : ",nom1);
     scanf("%f",&score1);
     printf("%s : ",nom2);
     scanf("%f",&score2);
     printf("%s : ",nom3);
     scanf("%f",&score3);
     printf("%s : ",nom4);
     scanf("%f",&score4);

     if (score1>=50){
        printf("Le candidat N.1 repondant au nom de %s avec un score de %.2f%% a gagne les Elections Legislatives au Premier Tour.\n",nom1,score1);
     } else if (score1>score2 && score1>score3 && score1>score4){
        printf("Le candidat N.1 repondant au nom de %s avec un score de %.2f%% se trouve en ballottage favorable pour les Elections Legislatives.\n",nom1,score1);

     } else  if (score1>=12.5 && (score1<score2 && score1<score3 && score1<score4)){
        printf("Le candidat N.1 repondant au nom de %s avec un score de %.2f%% se trouve en ballottage defavorable pour les Elections Legislatives.\n",nom1,score1);

     } else {
        printf("Le candidat N.1 repondant au nom de %s avec un score de %.2f%% a ete battu aux Elections Legislatives.\n",nom1,score1);

     }


     return 0;
 }
