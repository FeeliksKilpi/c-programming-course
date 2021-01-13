#include <stdio.h>

int main(void) {
  int luku, nelio;

  printf("Anna kokonaisluku:");
  scanf("%d", &luku);

  nelio = luku * luku;
  printf("Antamasi luvun neliö on %d", nelio);
}
