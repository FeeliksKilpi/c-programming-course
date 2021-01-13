#include <stdio.h>

int main() {
  int i;
  int kokonaisluku;
  printf("Anna kokonaisluku:");
  scanf("%d", &kokonaisluku);
  for(i=1; i <= kokonaisluku; i++) {
    printf("%d\n", i);
  }
  
  return 0;
}
