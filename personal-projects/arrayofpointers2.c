#include <stdio.h>
#include <stdlib.h>

int main() {
  int columns, rows;
  // array of pointers, whose pointers point at pointers to arrays
  scanf("%d", &columns);
  scanf("%d", &rows);

  int **dyna_column = malloc(columns * sizeof(int));
  int *dyna_rows;

  for (int i = 0; i < rows; i++) {
    dyna_rows = (int *)malloc(rows * sizeof(int));
    dyna_column[i] = &dyna_rows[i];
  }

  dyna_rows[0] = 1;

  // a type of 2d array? eg: dyna_column[0] points to the first dyna_rows array,
  // which contains a rows number of elements; dyna_column[0] dyna_rows[0] would
  // be equivalent to [0][0], but how to access this?

  return 0;
}