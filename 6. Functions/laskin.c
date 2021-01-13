#include <stdio.h>

void laske(int operandi, int eka, int toka) {
  int tulos;
  switch (operandi) {
    //summa
    case 1: {
      tulos = eka + toka;
      printf("%d + %d = %d\n", eka, toka, tulos);
    }
    //erotus
    case 2: {
      tulos = eka - toka;
      printf("%d - %d = %d\n", eka, toka, tulos);
    }
    //tulo
    case 3: {
      tulos = eka * toka;
      printf("%d * %d = %d\n", eka, toka, tulos);
    }
  }
}

void main() {
    int eka, toka, valinta;
    printf("1: kahden luvun summa\n");
    printf("2: kahden luvun erotus\n");
    printf("3: kahden luvun tulo\n");
    printf("<0: ohjelman lopetus\n");

    printf("Valitse laskutoimitus:");
    scanf("%d", &valinta);

    printf("Anna ensimmäinen luku:");
    scanf("%d", &eka);
    printf("Anna toinen luku:");
    scanf("%d", &toka);

    laske(valinta, eka, toka);
}
