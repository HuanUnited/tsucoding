#include <stdio.h>

int main() {
  int n;
  char str[2 * 100000];

  scanf("%d%s", &n, str);

  int c = 0;
  for (int i = 0; i < n - 2; i++) {
    if (str[i] == '#' && str[i + 1] == '.' && str[i + 2] == '#') {
      c++;
    }
  }
  printf("%d", c);
  return 0;
}