#include "HuanLibTema5.h"
#include <stdio.h>
#include <stdlib.h>

// в заданном массиве A заменить нулями все отрицательные элементы. in a given
// array anything smaller than 0 turns into 0

int main() {
  int *mas, n, giveni;

  arraydynamicsize(&mas, &n);

  arrayinput(mas, n);
  
  for (int i = 0; i < n; i++) {
    if (*(mas + i) <= 0) {
      *(mas + i) = 0;
      printf("Index %d is now %d\n", i, *(mas + i));
    }
  }

  arrayprint(mas, n);
  free(mas);

  return 0;
}