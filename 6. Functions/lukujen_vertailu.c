#include <stdio.h>

int pienin(int luku1, int luku2, int luku3);
int suurin(int luku1, int luku2, int luku3);

int main() {
  int luku1, luku2, luku3, pienin, suurin;
  printf("Anna 1. luku:");
  scanf("%d", &luku1);
  printf("Anna 2. luku:");
  scanf("%d", &luku2);
  printf("Anna 3. luku:");
  scanf("%d", &luku3);

  min = pienin(luku1, luku2, luku3);
  max = suurin(luku1, luku2, luku3);

  printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", min, max);


  return 0;
}

int pienin(int luku1, int luku2, int luku3) {
  int pienin;
  if((luku1<luku2) && (luku1<luku3)) {
    pienin = luku1;
  }
  else if((luku2<luku1) && (luku2<luku3)) {
    pienin = luku2;
  }
  else {
    pienin = luku3;
  }
  return pienin;
}

int suurin(int luku1, int luku2, int luku3) {
  int suurin;
  if((luku1>luku2) && (luku1 > luku3)) {
    suurin = luku1;
  }
  else if((luku2>luku1) && (luku2>luku3)) {
    suurin = luku2;
  }
  else {
    suurin = luku3;
  }
  return suurin;
}
