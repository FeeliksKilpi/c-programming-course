#include <stdio.h>

int main()
{
	int eka_luku, toka_luku, summa;

	printf("Syötä luku: ");
	scanf("%d", &eka_luku);

	printf("Syötä toinen luku: ");
	scanf("%d", &toka_luku);

	summa = eka_luku + toka_luku;

	printf("Syöttämiesi lukujen summa on %d\n", summa);


	return 0;
}
