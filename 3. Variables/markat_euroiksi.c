#include <stdio.h>

int main() {
    float eurot, markat;
    printf("Syötä jokin markkamäärä:");
    scanf("%f", &markat);
    eurot = markat / 5.94573;
    printf("Markat euroina: %f", eurot);
    return 0;
}
