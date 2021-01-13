#include <stdio.h>

int main() {
    int kokonaisluku;
    float liukuluku;

    printf("Anna kokonaisluku:");
    scanf("%d", &kokonaisluku);

    printf("Anna desimaaliluku:");
    scanf("%f", &liukuluku);
	printf("\n");

    printf("Syöttämäsi kokonaisluku: %d \n", kokonaisluku);
	printf("Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2f", liukuluku);
    return 0;
}
