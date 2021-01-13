#include <stdio.h>

int main(void) {
  FILE *reader;
  float luku1, luku2, luku3;

  if((reader = fopen("tiedosto.txt", "r")) == NULL) {
    printf("Tiedostoa ei löydetty");
    return 0;
  } else {
    fscanf(reader, "%f %f %f ", &luku1, &luku2, &luku3);
    fclose(reader);

    printf("Tiedostosta löytyi seuraavat luvut %f, %f, %f", luku1, luku2, luku3);
  }
  return 0;
}
