// Напечатать все слова данного предложения, не содержащие буквы 'а'

#include <stdio.h>
#include <string.h>

int main() {
  char str[1024];
  fgets(str, sizeof(str), stdin);
  int len = strlen(str);
  int start = 0;

  for (int i = 0; i <= len; i++) {
    // Detect word boundary or end of the string
    if (str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '\0') {
      int containsA = 0;

      // Check the current word for 'a' or 'A'
      for (int j = start; j < i; j++) {
        if (str[j] == 'a' || str[j] == 'A') {
          containsA = 1;
          break;
        }
      }

      // If the word doesn't contain 'a' or 'A', print it
      if (containsA == 0 && start < i) {
        for (int j = start; j < i; j++) {
          putchar(str[j]);
        }
        printf("\n");
      }

      // Move to the next word
      start = i + 1;
    }
  }

  return 0;
}


