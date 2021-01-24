#include <stdio.h>

void tulostaja(int *luvut, int x);

int main()
{
	int lkm = 4;
	int kokonaisluvut[] = {1, 4, 22, 91};
	tulostaja(kokonaisluvut, lkm);

  // Alkioiden välinen etäisyys
  int luvut[] = {2, 4, 5, 6};
	int *o_luvut_1, *o_luvut_2;
	int etaisyys;

	o_luvut_1 = &luvut[0];
	o_luvut_2 = &luvut[2];

	etaisyys = o_luvut_2 - o_luvut_1;

	return 0;
}

void tulostaja(int *luvut, int x)
{
	int i;
	for(i=0; i<x; i++) {
		printf("%d\n", luvut[i]);
	}
}
