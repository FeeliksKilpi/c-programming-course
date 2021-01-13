#include <stdio.h>

int main() {
  printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n");
  printf("Lopetus negatiivisella kokonaisluvulla.\n");
  float laskuri = 0;
  int syotetty_arvosana, summa;
  float keskiarvo;
  do {
      printf("Anna arvosana (4-10):");
      scanf("%d", &syotetty_arvosana);
      if(syotetty_arvosana >= 4 && syotetty_arvosana <= 10 && syotetty_arvosana > 0) {
        summa += syotetty_arvosana;
        laskuri++;
      }
      else {
        printf("Ohjelmaan syötetty %d arvosanaa.\n", laskuri);
        keskiarvo = summa / laskuri;
        printf("Arvosanojen keskiarvo: %f", keskiarvo);
      }

  } while(syotetty_arvosana > 0);

  return 0;
}
