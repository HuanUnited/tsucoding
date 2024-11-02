// Напечатать заданный непустой текст, удалив из него все буквы ‘b’,
// непосредственно перед которыми находится буква ‘c’. get a string, replace all
// 'b' with 'c'

#include <stdio.h>
#include <string.h>

int main() {
  char str[1024];
  char str2[1024];

  printf("Input string: \n");
  fgets(str, sizeof(str), stdin);
  
  // Remove newline character from fgets input
  str[strcspn(str, "\n")] = '\0';

  int len = strlen(str);
  
  // Output index to shift characters
  int j = 0;

  for (int i = 0; i < len; i++) {
    // If we find 'b' with 'c' before it, skip it
    if (str[i] == 'b' && i > 0 && str[i - 1] == 'c') {
      continue;
    }
    // Otherwise, keep the character
    str2[j++] = str[i];
  }

  // Null-terminate the result
  str2[j] = '\0';

  printf("%s\n", str2);
  return 0;
}