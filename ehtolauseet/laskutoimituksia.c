#include <stdio.h>

int main() {
  int valinta, eka, toka, tulos;

  printf("1: vähennyslasku\n");
  printf("2: yhteenlasku\n");
  printf("3: kertolasku\n");
  printf("Valitse toiminto:");
  scanf("%d", &valinta);

  switch (valinta) {
    case 1:
    {
      printf("Anna eka luku:");
      scanf("%d", &eka);
      printf("Anna toka luku:");
      scanf("%d", &toka);

      tulos = eka - toka;
      printf("%d-%d=%d", eka, toka, tulos);
      break;
    }
    case 2:
    {
      printf("Anna eka luku:");
      scanf("%d", &eka);
      printf("Anna toka luku:");
      scanf("%d", &toka);

      tulos = eka + toka;
      printf("%d+%d=%d", eka, toka, tulos);
      break;
    }
    case 3:
    {
      printf("Anna eka luku:");
      scanf("%d", &eka);
      printf("Anna toka luku:");
      scanf("%d", &toka);

      tulos = eka * toka;
      printf("%d*%d=%d", eka, toka, tulos);
      break;
    }
  }
  return 0;
}
