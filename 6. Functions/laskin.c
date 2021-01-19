#include <stdio.h>

void laske(int operandi, int eka, int toka) {
  int tulos;

  if (operandi == 1) {
    tulos = eka + toka;
    printf("%d + %d = %d\n", eka, toka, tulos);
  }
  else if (operandi == 2) {
    tulos = eka - toka;
    printf("%d - %d = %d\n", eka, toka, tulos);
  }
  else if (operandi == 3) {
    tulos = eka * toka;
    printf("%d * %d = %d\n", eka, toka, tulos);
  }
}

int main() {

    int eka, toka, valinta;
  do {
    printf("\n");
    printf("1: kahden luvun summa\n");
    printf("2: kahden luvun erotus\n");
    printf("3: kahden luvun tulo\n");
    printf("<0: ohjelman lopetus\n");

    printf("Valitse laskutoimitus:");
    scanf("%d", &valinta);
    if (valinta != 1 && valinta != 2 && valinta != 3) {
      printf("Ohjelma lopetetaan...");
      break;
    } else {
      printf("Anna ensimmäinen luku:");
      scanf("%d", &eka);
      printf("Anna toinen luku:");
      scanf("%d", &toka);

      laske(valinta, eka, toka);
  }
} while (valinta != 0);
  return 0;
}
