#include <stdio.h>

int main() {
  int paivat, indeksi;
  double tunnit, yht = 0, keskiarvo;
  printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\n");
  printf("tehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n");
  printf("Kuinka monta päivää:");
  scanf("%d", &paivat);
  double taulukko[paivat];

  for (indeksi = 1; indeksi < paivat+1; indeksi++) {
    printf("Anna %d. päivän työtunnit:", indeksi);
    scanf("%lf", &tunnit);
    taulukko[indeksi] = tunnit;
    yht += taulukko[indeksi];
    keskiarvo = yht / paivat;
  }

  printf("Tehdyt työtunnit yhteensä: %.1lf\n", yht);
  printf("Keskimääräinen työpäivän pituus: %.1lf\n", keskiarvo);
  printf("Syötetyt tunnit: ");
  for (indeksi = 0; indeksi < paivat; indeksi++) {
    printf("%.1lf", taulukko[indeksi]);
  }

  return 0;
}
