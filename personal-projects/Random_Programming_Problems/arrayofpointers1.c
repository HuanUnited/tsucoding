#include <stdio.h>
#include <stdlib.h>
// array of pointers pointing to pointers in an array
int main() {
  int var1 = 10;
  int var2 = 20;
  int var3 = 30;

  int *ptr_arr[3] = {&var1, &var2, &var3};

  int **dyna_array_of_pointers[3] = {&ptr_arr[0], &ptr_arr[1], &ptr_arr[2]};
  // array of pointers to integers
  // traversing using loop
  for (int i = 0; i < 3; i++) {
    printf("Address of dyna: %p\nValue of var%d: %d\tAddress: %p\n",
           &**dyna_array_of_pointers[i], i + 1, *ptr_arr[i], ptr_arr[i]);
  }

  return 0;
}