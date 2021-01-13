#include <stdio.h>

int main() {
  char sana[16];
  int vokaalit = 0, indeksi;
  printf("Ohjelma laskee vokaalien määriä.\n");
  printf("Anna sana:");
  scanf("%s", sana);

  for (indeksi = 0; sana[indeksi] != '\0'; indeksi++) {
    if (sana[indeksi] == 'a' || sana[indeksi] == 'e' || sana[indeksi] == 'i' ||
            sana[indeksi] == 'o' || sana[indeksi] == 'u' || sana[indeksi] == 'A' ||
            sana[indeksi] == 'E' || sana[indeksi] == 'I' || sana[indeksi] == 'O' ||
            sana[indeksi] == 'U') {
            vokaalit++;
        }
  }
  printf("Sanassa vokaaleja: %d", vokaalit);
  return 0;
}
