#include <stdio.h>

int main(void)
{
  int valinta;
  do{

    printf("1:kissa\n2:koira\n3:lehmä\n");
    printf("Lopetus negatiivisella luvulla.\n");
    printf("Valitse eläin:");
    scanf("%d", &valinta);
    if(valinta < 0) {
      tulosta(0);
    }
    else if(valinta == 1) {
      tulosta(1);
    }
    else if(valinta == 2) {
      tulosta(2);
    }
    else if(valinta == 3) {
      tulosta(3);
    }
    else {
      printf("Antamasi luku ei kelpaa.\n\n");
    }
  }while(valinta>0);
  return 0;
}

void tulosta(int valinta) {
  switch (valinta) {
    case 0: {
      printf("Ohjelma lopetetaan...");
    }
    case 1: {
      printf("Kissa sanoo miau!");
    }
    case 2: {
      printf("Koira sanoo hau-hau!");
    }
    case 3: {
      printf("Lehmä sanoo ammuu!");
    }
  }
}
