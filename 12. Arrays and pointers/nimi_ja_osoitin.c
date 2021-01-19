#include <stdio.h>

void tulostaja(int *luvut, int x);
int main()
{
  int lkm = 4;
	int kokonaisluvut[] = {1, 4, 22, 91};

	int x = 0;
	int kokonaislukuja[3];
	float liukulukuja[3];

	printf("Taulukoiden alkioiden osoitteita:\n\n");

	for(x=0; x<3; x++) {
		printf("Kokonaislukutaulukon %d. alkion osoite: ", x+1);
		printf("%d\n", &kokonaislukuja[x]);
		printf("Liukulukutaulukon %d. alkion osoite: ", x+1);
		printf("%d\n", &liukulukuja[x]);
	}

  tulostaja(kokonaisluvut, lkm);

	return 0;
}

void tulostaja(int *luvut, int x)
{
	int i;
	for(i=0; i<x; i++) {
		printf("%d\n", luvut[i]);
	}
}
