#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int num_move(int n, int from, int to, int ng) {
  if (from > to)
    swap(&from, &to);
  if (from < ng && ng < to) {
    return n + from - to;
  } else
    return to - from;
}

int main() {
  int n, q;

  puts("Input n and q");
  scanf("%d", &n); // 3 <= n <= 100
  scanf("%d", &q); // 1 <= q <= 100

  int minop = 0, l_pos = 1, r_pos = 2;

  for (int i = 0; i < q; i++) {
    char h;
    int t;

    getchar();  // Clear the newline character left by scanf
    h = getchar();  // Read character for h[i]

    scanf("%d", &t);

    if (h == 'R') {
      minop += num_move(n, r_pos, t, l_pos);
      r_pos = t;
    } else {
      minop += num_move(n, l_pos, t, r_pos);
      l_pos = t;
    }

  }

  printf("%d\n", minop);
  return 0;
}