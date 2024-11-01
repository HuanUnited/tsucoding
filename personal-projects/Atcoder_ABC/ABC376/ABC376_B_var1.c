#include <stdio.h>
#include <stdlib.h>

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
  int n, q;       // n is the amount of parts on the ring and q is the amount of
                  // instructions
  int *t, *parts; // h is the hand (either left or right) and t is the position
                  // of h on the ring (corresponding to a part)
  char *h;

  puts("Input n and q");
  scanf("%d", &n); // 3 <= n <= 100
  scanf("%d", &q); // 1 <= q <= 100
  parts = (int *)malloc(n * sizeof(int));
  t = (int *)malloc(q * sizeof(int));
  h = (char *)malloc(q * sizeof(char) * 10);

  for (int i = 0; i < n; i++) {
    parts[i] = i + 1;
  }

  puts("Input instructions for h and t arrays:");
  for (int i = 0; i < q; i++) {
    getchar(); // Clear the newline character left by scanf
    h[i] = getchar(); // Read character for h[i]
    scanf("%d", &t[i]);
  }

  // detect if h[i] is L or R, and then find the shortest path without crossing
  // one hand to get to position t[i] note that n is an array, where the n[0] =
  // 1 and n[n] = n and n[n] loops back to n[0] meaning if i is > n -> i = 0 ->
  // execute code

  int minop = 0, l_pos = 1, r_pos = 2;
  // compare the positions of L and R, see which path takes less steps, and then
  // move accordingly (maybe use subtraction)

  // first, see if on the minimal path, l_pos and r_pos overlap, if so, go the
  // opposite direction (how do we do this) next, go the opposite direction and
  // the count upwards.

  for (int i = 0; i < q; i++) {
    if (h[i] == 'R') {
      minop += num_move(n, r_pos, t[i], l_pos);
    } else {
      minop += num_move(n, l_pos, t[i], r_pos);
    }
  }

  free(t);
  free(parts);
  free(h);
  printf("%d\n", minop);
  return 0;
}