#include<stdio.h>

int *pienimman_arvon_osoite(int *luvut, int koko);

int main(void) {
  int luvut[] = { 21, 55, 5, 3, 43 };
  int koko = 5;
  int *pienin = pienimman_arvon_osoite(luvut, koko);

  printf("Taulukon pienin luku on: %d\n", *pienin);
  return 0;
}

int *pienimman_arvon_osoite(int *luvut, int koko) {
  int *pienin_osoitin = &luvut[0];
  //printf("%d", *pienin_osoitin);
	for (int i = 0; i < koko; i++) {
		if (*pienin_osoitin > luvut[i]) {
			*pienin_osoitin = luvut[i];
		}
	}
	return pienin_osoitin;
}
