#include <stdio.h>

int main()
{
  int nombre,i,j,premier;
  printf("Veuillez entrez un entier: ");
  scanf("%d", &n);
  printf("Les nombres premiers inferieurs a %d sont : ",n);
  for (i = 2; i < nombre; i++) {
    premier = 1;
    for (j = 2; j < i; j++) {
      if (i % j == 0) {
        premier = 0;
        break;
      }
    }
    if (premier) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
