#include <stdio.h>

int main() {
  char etunimijono[16];
  char sukunimijono[21];
  char tiedostonimi[12];
  printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\n");
  printf("Syötä etunimesi:");
  scanf("%s", etunimijono);
  printf("Syötä sukunimesi:");
  scanf("%s", sukunimijono);

  printf("Tiedosto johon haluat tallentaa nimesi:\n");
  scanf("%s", tiedostonimi);
  FILE *luonti;

  if((luonti = fopen(tiedostonimi, "a")) == NULL) {
    printf("Tiedoston avaamisessa virhe");
    return 0;
  } else {
    fprintf(luonti, "%s %s", etunimijono, sukunimijono);
    fclose(luonti);
    printf("Tallennus onnistui!");
  }

  return 0;
}
