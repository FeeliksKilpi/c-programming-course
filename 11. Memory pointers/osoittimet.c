#include <stdio.h>

int main() {
  float massa = 64.50;
  float *o_massa;
  o_massa = &massa;

  printf("massa = %.2f\n", massa);
  printf("&massa = %d\n\n", &massa);

  printf("*o_massa = %.2f\n", *o_massa);
  printf("o_massa = %d", o_massa);

  return 0;
}
