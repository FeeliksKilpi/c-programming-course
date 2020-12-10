#include <stdio.h>

int main() {
    char kahvitee;
    int kuppia;

    printf("Juotko kahvia vai teetä (k/t)?");
    kahvitee = getchar();
    getchar();

    if (kahvitee == 'k' || kahvitee == 'K') {
      printf("Montako kuppia juota päivässä:");
      scanf("%d", &kuppia);
      if (kuppia > 0 && kuppia <= 2) {
        printf("Et taida juoda paljon kahvia.");
      }
      else if (kuppia >= 3 && kuppia <= 20) {
        printf("Juotpa paljon kavhia!");
      }
      else {
        printf("Ohjelmassa tapahtunut virhe!");
      }
    }

    else if (kahvitee == 't' || kahvitee == 'T') {
      printf("Montako kuppia juota päivässä:");
      scanf("%d", &kuppia);
      if (kuppia > 0 && kuppia <= 2) {
        printf("Et taida juoda paljon teetä.");
      }
      else if (kuppia >= 3 && kuppia <= 20) {
        printf("Juotpa paljon teetä!");
      }
      else {
        printf("Ohjelmassa tapahtunut virhe!");
      }
    }

  else if (kahvitee != 'k' || kahvitee != 'K' || kahvitee != 't' || kahvitee != 'T') {
    printf("Montako kuppia juota päivässä:");
    scanf("%d", &kuppia);
    printf("Ohjelmassa tapahtunut virhe!");
  }
  return 0;
}
