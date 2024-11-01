// в заданном массиве A переписать положительные элементы в начало массива, а
// отрицательные - в конец, сохраняя порядок элементов.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, *m, *cm;

  puts("input size of array");
  scanf("%d", &n);
  m = (int *)malloc(n * sizeof(int));
  cm = (int *)malloc(n * sizeof(int));

  puts("input array");
  for (int i = 0; i < n; i++) {
    scanf("%d", &m[i]);
  }

 int count = 0;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (m[j] >= 0){
        cm[count] = m[j];
        count++;
      }
    }
    for (int j = 0; j < n; j++){
      if (m[j] < 0){
        cm[count] = m[j];
        count++;
      }
    }
  }
  free(m);

  puts("New array");
    for (int j = 0; j < n; j++) {
      printf("%d ", cm[j]);
    }

  free(cm);

  return 0;
}
