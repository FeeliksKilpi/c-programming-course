#include <stdio.h>
#include <string.h>

int main() {
  //int strcmp(const char *str1, const char *str2);
  int maara, i, vertailu_e, vertailu_s;
  char str1[15];
  char str2[20];
  struct yhteystieto {
    char etunimi[15];
    char sukunimi[20];
    char puhelin[15];
  }henkilo;

  printf("Anna etunimi:");
  scanf("%s", henkilo.etunimi);

  printf("Anna sukunimi:");
  scanf("%s", henkilo.sukunimi);

  FILE *lue;
  if((lue = fopen("luettelo.txt", "r+")) == NULL) {
    printf("Tiedostoa ei löydetty");
    return 0;
  } else {
    fscanf(lue, "%d", &maara);
	  struct yhteystieto yhteystiedot_lista[maara];

// Luetaan luettelossa olevien ihmisten määrän verran yhteystietoja
    for (i=0; i<maara; i++) {
      fscanf(lue, "%s %s %s ",
      yhteystiedot_lista[i].etunimi,
      yhteystiedot_lista[i].sukunimi,
      yhteystiedot_lista[i].puhelin);
// Otetaan kopiot etunimesta ja sukunimesta i-kohdassa.
      strcpy(str1, yhteystiedot_lista[i].etunimi);
      strcpy(str2, yhteystiedot_lista[i].sukunimi);
// Vertaillaan syötettyihin etu- ja sukunimeen
      vertailu_e = strcmp(str1, henkilo.etunimi);
      vertailu_s = strcmp(str2, henkilo.sukunimi);

      if (vertailu_e == 0 && vertailu_s == 0) {
          maara--;
          continue;
        } else {
          printf("Etsimääsi henkilöä ei löytynyt luettelosta.");
        }
// Kirjoitetaan tiedostoon uuden määrän perusteella takaisin yhteystiedot
// Määrä 1. riville, muutoin jokainen henkilo omalle rivilleen.
      fprintf(lue, "%d\n", maara);
        for (i=0; i<maara; i++) {
          fprintf(lue, "%s %s %s\n",
          yhteystiedot_lista[i].etunimi,
          yhteystiedot_lista[i].sukunimi,
          yhteystiedot_lista[i].puhelin);
        }
      fclose(lue);
      printf("Tiedot poistettu luettelosta.");

    }
  }

/*  FILE *kirjoita;
  if((kirjoita = fopen("luettelo.txt", "w")) == NULL) {
    printf("Tiedoston avaamisessa virhe");
    return 0;
  } else {
// Kirjoitetaan tiedostoon uuden määrän perusteella takaisin yhteystiedot
// Määrä 1. riville, muutoin jokainen henkilo omalle rivilleen.
    fprintf(kirjoita, "%d\n", maara);
    for (i=0; i<maara; i++) {
      fprintf(kirjoita, "%s %s %s\n",
      yhteystiedot_lista[i].etunimi,
      yhteystiedot_lista[i].sukunimi,
      yhteystiedot_lista[i].puhelin);
    }
    fclose(kirjoita);
    printf("Tietojen tallennus onnistui.");
  }


    for (i=0; i<maara; i++) {
      printf("%s %s %s\n",
      yhteystiedot_lista[i].etunimi,
      yhteystiedot_lista[i].sukunimi,
      yhteystiedot_lista[i].puhelin);
    }
}
 */
  return 0;
}
