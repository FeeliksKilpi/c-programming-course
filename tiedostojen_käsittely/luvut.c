#include <stdio.h>

int main(void) {
  FILE *reader;
  int luku1, luku2, luku3, luku4, summa;

  if((reader = fopen("luvut.s", "r")) == NULL) {
    printf("Tiedostoa ei löydetty");
    return 0;
  } else {
    fscanf(reader, "%d %d %d %d ", &luku1, &luku2, &luku3, &luku4);
    fclose(reader);
    printf("Tiedostosta luvut.s löytyneet\n");
    printf("%d, %d, %d ja %d", luku1, luku2, luku3, ,luku4);

    summa = luku1 + luku2 + luku3 + luku4;
    printf("Lukujen summa: %d", summa);
  }
  return 0;
}
