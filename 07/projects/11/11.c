#include <stdio.h>

int main(void) {
  char first_initial;

  printf("Enter a first and last name: ");
  scanf(" %c", &first_initial);

  char ch;

  while ((ch = getchar()) != ' ') {
    ;
  }

  while ((ch = getchar()) == ' ') {
    ;
  }

  do {
    putchar(ch);
  } while ((ch = getchar()) != '\n' && ch != ' ');

  printf(", %c.\n", first_initial);

  return 0;
}
