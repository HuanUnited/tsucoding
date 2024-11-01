#include <stdio.h>
#include <stdlib.h>
// array of pointers pointing to pointers in an array
int main() {
  // c reads in a row major style, meaning 1 2 3 row 1, 2 3 4 row 2, 3 4 5 row
  // 3,

  int rows, columns, *array;
  puts("Input rows:");
  scanf("%d", &rows);

  puts("Input columns:");
  scanf("%d", &columns);

  // dynamic row and column allocation
  array = (int *)malloc(rows * columns * sizeof(int));

  int i, j;
  // 2d array input 0 1 2 3 in memory correlates to 00 01 (this should be 1) 10
  // (this should be 2) 11
  puts("Input matrix:");
  for (i = 0; i < rows; i++) {
    printf("Row %d\n", i + 1);
    for (j = 0; j < columns; j++) {
      scanf("%d", &array[j + i * columns]);
    }
  }

  // 2d array print

  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      printf("%d ", array[j + i * columns]);
    }
    printf(" \n");
  }

  // row and column navigation system:
  int nav_row, nav_column;
  puts("Input coordinates:");
  scanf("%d", &nav_row);
  scanf("%d", &nav_column);
  printf("%d\n", array[(nav_column - 1) + (nav_row - 1) * columns]);

  return 0;
}