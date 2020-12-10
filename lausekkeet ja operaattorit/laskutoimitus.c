#include <stdio.h>

int main() {
    int eka, toka, summa, vahennus, kerto;
    printf("Anna eka luku:");
    scanf("%d", &eka);
    printf("Anna toka luku:");
    scanf("%d", &toka);

    summa = eka + toka;
    vahennus = eka - toka;
    kerto = eka * toka;

    printf("%d+%d=%d\n", eka, toka, summa);
    printf("%d-%d=%d\n", eka, toka, vahennus);
    printf("%d*%d=%d\n", eka, toka, kerto);
    return 0;
}
