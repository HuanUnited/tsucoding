#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int minus_sign(int a) { return (a == 1) ? 0 : 1; }

int con(int a, int b) {
  // conjunction function
  if (a == 1 && b == 1) {
    return 1;
  } else
    return 0;
}

int dis(int a, int b) {
  // disjunction function
  if (a == 0 && b == 0) {
    return 0;
  } else
    return 1;
}

int xor
    (int a, int b) {
      if (a != b) {
        return 1;
      } else
        return 0;
    }

    int equ(int a, int b) {
  // the ~ thing
  return minus_sign(xor(a, b));
}

int arrdown(int a, int b) {
  if (a == 0 && b == 0) {
    return 1;
  } else
    return 0;
}

int slash(int a, int b) {
  if (a == 1 && b == 1) {
    return 0;
  } else
    return 1;
}

int arr(int a, int b) {
  // arrow right
  if (a == 0 && b == 1) {
    return 0;
  } else
    return 1;
}

int mart(int a, int b) {
  // arrow right with a slash between
  return minus_sign(arr(a, b));
}

int arl(int a, int b) {
  // arrow left
  if (a == 1 && b == 0) {
    return 0;
  } else
    return 1;
}

int marl(int a, int b) {
  // arrow left with a slash between
  return minus_sign(arl(a, b));
}

// t_length (table length) would be equal to the length of the function
// let's use a variable array, and a function answer array = 2^n
int main() {
  // for now lets have this work for 2 variables
  int var_size = 3; // this is the amount of variables or the amount of columns
  int t_length = 8; // = (int)pow(2, var_size); // this is the length of the function or the amount of rows
  int *function = (int *)malloc(t_length * sizeof(int));

  int afunction[8][3] = {{0,0,0}, 
                         {0,0,1}, 
                         {0,1,0}, 
                         {0,1,1},
                         {1,0,0},
                         {1,0,1},
                         {1,1,0},
                         {1,1,1}};
  // 2darray[rows][columns]
  // int afunction[t_length][var_size];
  
  
  // we need to make a parser so we can type in the answers on screen

  for (int row = 0; row < t_length; row++) {
    for (int columns = 0; columns < var_size; columns++) {
      int i = 0;
      // input operation here! after the equal sign! // how to make the operations run from left to right
      function[i] =
          minus_sign(xor((con(minus_sign(afunction[i][0]), afunction[i][2])),afunction[i][1]));
      i++;
    }
    // how do we fill this up? maybe use a 2d array?
  }

  // now we print the function
  puts("f(x):");
  for (int i = 0; i < t_length; i++) {
    printf("%d %d %d: ", afunction[i][0],afunction[i][1],afunction[i][2]);
    printf("%d \n", function[i]);
  }

  return 0;
}
