// I heard about this assignment from a friend and wanted to see how I could
// code it.
//  Given an array find the min and max of said array and print the array so
//  that all other elements are between min and max

#include <stdio.h>

int minfunc(int a, int b) { return (a < b) ? a : b; }

int maxfunc(int a, int b) { return (a > b) ? a : b; }

void stepsort(int *a, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  int mas[1024], n;
  printf("Input n:\n");
  scanf("%d", &n);

  printf("Input array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &mas[i]);
  }

  // should i just do a sorting thing here?

  int minmas = mas[0], maxmas = mas[0];

  for (int i = 0; i < n; i++) {
    minmas = minfunc(minmas, mas[i]);
    maxmas = maxfunc(maxmas, mas[i]);
  }
  printf("min = %d, max = %d\n", minmas, maxmas);

  stepsort(mas, n);
  printf("New Array:\n");
  for (int k = 0; k < n; k++) {
    printf("%d ", mas[k]);
  }
  printf("\n");

  return 0;
}