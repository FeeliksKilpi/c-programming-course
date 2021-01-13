#include <stdio.h>

int main() {
    int kokonaisluku, jakojaan;
    printf("Anna kokonaisluku:");
    scanf("%d", &kokonaisluku);
    jakojaan = kokonaisluku % 2;

    if (jakojaan == 0) {
      printf("Luku on 0");
    } else {
      printf("Luku on 1");
    }

}
