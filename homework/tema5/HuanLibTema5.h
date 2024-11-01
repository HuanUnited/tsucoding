#include <stdio.h>
#include <stdlib.h>

void arraydynamicsize(int **mas, int *n) {
  // Takes the address of the pointer *mas (pointer to a pointer) and the
  // address of int n This allows modifying both the array pointer and the size
  // outside of the function

  /// Creates an array with a dynamic size
  puts("Input size of array:");
  scanf("%d", n);
  // Inputs the number n through the user and stores it in the memory location
  // pointed to by n Since n is a pointer, the value of the variable passed from
  // the main function is updated

  *mas = (int *)malloc(*n * sizeof(int));
  // Dynamically allocates memory for an array of size n (the value pointed to
  // by n) elements The memory is allocated for *mas, i.e., for the array whose
  // pointer is stored at the address mas

  if (*mas == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
    // If malloc fails to allocate memory, print an error message and exit the
    // program
  }
  // The function modifies the value of the pointer *mas to point to the newly
  // allocated array This change is reflected outside the function because mas
  // is a pointer to a pointer
}

void arrayinput(int *mas, int n) { 
    //Takes the pointer mas and just the value of int n. 
    //The pointer mas allows direct modification of the array elements
    //because mas points to the memory location of the array passed from the calling function.
  puts("Input array:");
  for (int i = 0; i < n; i++) {
    scanf("%d", &mas[i]);
    //updates the value at the address that pointer mas is pointing at (mas's i index address)
    printf("index %d now has the value %d\n", i, mas[i]);
  }
}

void arrayprint(int *mas, int n) {
  for (int i = 0; i < n; i++) {
    printf("At index %d is %d\n", i, mas[i]);
  }
}