#include <stdio.h>
// kirjoittaa nimen tiedoston perään
int main(void) {
  FILE *avaus;
  avaus = fopen("tiedosto.txt", "a");

  if(avaus == NULL) {
    printf("Tiedoston avaamisessa virhe!");
    return 0;
  } else {
    fprintf(avaus, "Feeliks Kilpi");
    fclose(avaus);
  }
  return 0;
}
