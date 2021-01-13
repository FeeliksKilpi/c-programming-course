#include <stdio.h>

int main() {
  int i, maara;
  struct yhteystieto {
    char etunimi[15];
    char sukunimi[20];
    char puhelin[15];
  };


  FILE *lue;
  if((lue = fopen("luettelo.txt", "r")) == NULL) {
    printf("Tiedostoa ei löydetty");
    return 0;
  } else {
    fscanf(lue, "%d", &maara);
	  struct yhteystieto yhteystiedot_lista[maara];

    for (i=0; i<maara; i++) {
      fscanf(lue, "%s %s %s ",
      yhteystiedot_lista[i].etunimi,
      yhteystiedot_lista[i].sukunimi,
      yhteystiedot_lista[i].puhelin);
    }
    fclose(lue);

    for (i=0; i<maara; i++) {
      printf("%s %s %s\n",
      yhteystiedot_lista[i].etunimi,
      yhteystiedot_lista[i].sukunimi,
      yhteystiedot_lista[i].puhelin);
    }
  }
  return 0;
}
