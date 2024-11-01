#include <stdio.h>
#include <stdlib.h>

// let's first use a normal pre-given 3x3 grid

int main() {

  int grid[3][3] = {{1, 3, 1}, 
                    {1, 5, 1}, 
                    {4, 2, 1}};
  int i = 0, j = 0;
  // algorhithm to natigate this grid - know that to move only to the right
  // [j][i+1] if the given pos on the grid is [j][i] moving to the down is
  // [j+1][i] what we want to is with the given sum, compare sum += right and
  // sum += down to see which value is smaller and then output the smallest
  // possible path this is the most basic approach and we'll see what else we
  // can do with it later, for now we need to know how to navigate the array.
  int sum = grid[i][j];
  int *gridptr = &grid[0][0];
  while (gridptr != &grid[2][2]) {
    if (i >= 2 && j >= 2){break;}
    if (sum + grid[j][i + 1] <= sum + grid[j + 1][i]) {
      i++;
      sum += grid[j][i];
      gridptr = &grid[j][i];
      printf("move right at grid[%d][%d]\n", j, i);
    } else {
      j++;
      sum += grid[j][i];
      gridptr = &grid[j][i];
      printf("move down at grid[%d][%d]\n", j, i);
    }
  }
  // compare if grid[0+1][0] would be bigger to grid[0][0+1]
  // We need to make this stop at grid[3][3], maybe use a pointer?, maybe we
  // could navigate using the addresses instead?

  // what if we worked backwards from the furthest point to the 


  printf("final sum is %d\n", sum);
}