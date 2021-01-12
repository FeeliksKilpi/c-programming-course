#include <stdio.h>

int main() {
  int matriisi[5][5] =
  {
  4, 6, 25, 88, 5,
  34, 5, 300, 4, 65,
  78, 43, 11, 90, 125,
  98, 585, 12, 63, 21,
  45, 35, 9, 5, 1
  };
  int x, y, summa;
  printf("Taulukon:\n");
  for (y = 0; y < 5; y++) {
    for (x = 0; x < 5; x++) {
      summa += matriisi[y][x];

      if(x == 4) {
				printf("%d\n", matriisi[y][x]);
			} else {
				printf("%d\t", matriisi[y][x]);
			}
    }
  }
  printf("alkioiden summa on %d", summa);
  return 0;
}
