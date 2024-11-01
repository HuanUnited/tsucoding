#include <math.h>
#include <stdio.h>

int main() {
  int n, a = 0, b = 0, c = 0, d = 0;
  double sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &c, &d);
    sum += (double)sqrt(pow(a - c, 2) + pow(b - d, 2));
    a = c; b = d;}
  sum += (double)sqrt(pow(a - 0, 2) + pow(b - 0, 2));
  printf("%.6lf\n", sum);
  return 0;
}