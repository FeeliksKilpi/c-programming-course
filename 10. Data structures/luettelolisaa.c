#include <stdio.h>

int main() {
  struct yhteystieto {
    char etunimi[15];
    char sukunimi[20];
    char puhelin[15];
  }henkilo;

  printf("Anna etunimi:");
  scanf("%s", henkilo.etunimi);

  printf("Anna sukunimi:");
  scanf("%s", henkilo.sukunimi);

  printf("Anna puhelinnumero:");
  scanf("%s", henkilo.puhelin);


    FILE *luonti;
    if((luonti = fopen("luettelo.txt", "a")) == NULL) {
      printf("Tiedoston avaamisessa virhe");
      return 0;
    } else {
      fprintf(luonti, "\n%s %s %s", henkilo.etunimi, henkilo.sukunimi, henkilo.puhelin);
      fclose(luonti);
      printf("Tietojen tallennus onnistui.");
    }

  return 0;
}
