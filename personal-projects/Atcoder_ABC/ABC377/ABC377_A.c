#include <stdio.h>
// ABC BCA BAC
int main() {
  char input[3];
  scanf("%s", input);
  /*for (int i = 0; i < 3; i++) {
    printf("%c\n", input[i]);
  }*/
  while (1) {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++) {
      if (input[i] == 'A') {
        a = 1;
        input[i] = 0;
      }
      if (input[i] == 'B') {
        b = 1;
        input[i] = 0;
      }
      if (input[i] == 'C') {
        c = 1;
        input[i] = 0;
      }
    }
    if (a == 1 && b == 1 && c == 1) {
      printf("YES\n");
      break;
    } else {
      printf("NO\n");
      break;
    }
    return 0;
  }
}