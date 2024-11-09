// Дана строка из n слов (n неизвестно). Слова разделены пробелами (одним или
// несколькими). Найти слово, начинающееся буквой 'a' и оканчивающееся буквой
// 'z' (если таких слов нет, сообщить об этом).

#include <stdio.h>
#include <string.h>

int main() {
  char str[10000];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  int len = strlen(str);
  int found = 0;

  for (int i = 0; i < len; i++) {
    // Skip any leading spaces
    while (i < len && str[i] == ' ') {
      i++;
    }

    // Check if the current word starts with 'a' or 'A'
    if ((str[i] == 'a' || str[i] == 'A') && i < len) {
      int start = i;

      // Find the end of the current word
      while (i < len && str[i] != ' ') {
        i++;
      }

      // Check if the word ends with 'z' or 'Z'
      if ((str[start] == 'a' || str[start] == 'A') && (str[i - 1] == 'z' || str[i - 1] == 'Z')) {
        // Print the word if it meets the criteria
        printf("Found word: ");
        for (int j = start; j < i; j++) {
          putchar(str[j]);
        }
        printf("\n");
        found++;
      }
    }
  }

  // If no matching word was found
  if (!found) {
    printf("No words starting with 'a' and ending with 'z' found.\n");
  }

  return 0;
}