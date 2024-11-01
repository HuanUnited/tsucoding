#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int findClosestNumber(int *nums, int numsSize) {
  int closest = nums[0];
  for (int i = 0; i < numsSize; i++) {

    if (nums[i] == 0) {
      return 0;
    }

    if (abs(nums[i]) < abs(closest)) {
      closest = nums[i];
    } else if ((abs(nums[i]) == abs(closest)) && nums[i] > closest) {
      closest = nums[i];
    }
  }
  return closest;
}

int main() {
  int numsSize, *nums;

  puts("Input array length:");
  scanf("%d", &numsSize);

  nums = (int *)malloc(numsSize * sizeof(int));

  puts("Input array:");
  for (int i = 0; i < numsSize; i++) {
    scanf(" %d", &nums[i]);
  }

  int closest = 0, distance = abs(nums[0]);
  for (int i = 0; i < numsSize; i++) {
    printf("The distance from %d to 0 is |%d| = %d.\n", nums[i], nums[i],
           abs(nums[i]));
    if (abs(nums[i]) <= distance) {
      distance = abs(nums[i]);
      closest = nums[i];
      printf("Closest to 0 is now %d\n", nums[i]);
    }
  }

  printf("Closest to zero is %d\n", closest);

  return 0;
}