#include <stdio.h>
#include <string.h>

int main() {
  int i;

  struct contact {
    char f_name[21];
    char l_name[21];
    char phone[21];
  };

  char file[] = "luettelo.txt";
  int c_amount = 0;
  int c_amount_at_start = 0;
  char f_name_input[21], l_name_input[21];

  printf("Anna etunimi:");
  scanf("%s", f_name_input);

  printf("Anna sukunimi:");
  scanf("%s", l_name_input);

  FILE *read;
  if((read = fopen(file, "r")) == NULL) {
    printf("Tiedostoa ei löydetty");
    return 0;

  } else {
    fscanf(read, "%d", &c_amount);
    c_amount_at_start = c_amount;
    fclose(read);
  }

  struct contact contacts_list[c_amount];

  FILE *read_again = fopen(file, "r");

    for (i=0; i<c_amount; i++) {
      fscanf(read_again, "%s %s %s ",
      contacts_list[i].f_name,
      contacts_list[i].l_name,
      contacts_list[i].phone);
    }
  fclose(read_again);

  FILE *write = fopen(file, "w");

    for (i=0; i < c_amount; i++) {
      if(strcmp(contacts_list[i].l_name, l_name_input) == 0 && strcmp(contacts_list[i].f_name, f_name_input) == 0)
      {
        c_amount_at_start--;
        continue;
      }
      else {
        if (i == (c_amount -1)) {
          fprintf(write, "%s %s %s", contacts_list[i].f_name, contacts_list[i].l_name, contacts_list[i].phone);
        } else {
          fprintf(write, "%s %s %s\n", contacts_list[i].f_name, contacts_list[i].l_name, contacts_list[i].phone);
        }
      }
    }
  fclose(write);

  FILE *write_again = fopen(file, "r+");
  fprintf(write_again, "%d/n", c_amount_at_start);
  fclose(write_again);

  if (c_amount_at_start == c_amount) {
    printf("Etsimääsi henkilöä ei löytynyt luettelosta.\n");
  } else {
    printf("Tiedot poistettu luettelosta.\n");
  }
  return 0;
}
