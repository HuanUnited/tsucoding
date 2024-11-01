// given an array and a number
// remove all the "number" from the array
// replace the number with "_" (for now i'll use 0)
// shift the position one digit to the left so that
// the remaining array is looks like this

/*
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of
nums being 2. It does not matter what you leave beyond the returned k (hence
they are underscores).
*/

#include <stdio.h>
#include <stdlib.h>

void swap1way(char *a, char *b) {
  *a = *b;
  *b = '_';
}

int main() {
  // let's first take a given array so i can work out the replacement algo
  int array_size, count = 0;
  char target;
  char *array;

  puts("Input array length:");
  scanf("%d", &array_size);

  array = (char *)malloc(array_size * sizeof(int));

  puts("Input array:");
  for (int i = 0; i < array_size; i++) {
    scanf(" %c", &array[i]);
  }

  puts("Input target:");
  scanf(" %c", &target);

  for (int i = 0; i < array_size; i++) {
    if (array[i] == target) {
      array[i] = '_';
    }
  }

  for (int i = 0; i < array_size; i++) {
    for (int j = i + 1; j < array_size; j++) {
      if (array[i] == '_' && array[j] != '_') {
        swap1way(&array[i], &array[j]);
        count++;
      }
    }
  }

  printf("count = %d\n", count);

  for (int i = 0; i < array_size; i++) {
    if (array[i] == '_') {
      printf("%c ", array[i]); // Print '_' as a character
    } else {
      printf("%c ", array[i]); // Print numbers as integers
    }
  }

  return 0;
}