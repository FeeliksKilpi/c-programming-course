#include <stdio.h>

int main() {
  int i, kokonaisluku;
  int kertoma = 1;
  printf("Anna kokonaisluku:");
  scanf("%d", &kokonaisluku);

  if (kokonaisluku < 0) {
    printf("Negatiivisella luvulla ei voi olla kertomaa.");
  }
  else {
    for(i=1; i <= kokonaisluku; i++) {
      kertoma *= i;
    }
    printf("Luvun %d kertoma on %d", kokonaisluku, kertoma);
  }

  return 0;
}
