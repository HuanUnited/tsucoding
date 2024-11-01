#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int main() {
  int *nums;
  int numsSize;
  int target;
  int returnSize[2] = {0,0};
  
  puts("Input array size:");
  scanf("%d", &numsSize);
  
  nums = (int*)malloc(numsSize*sizeof(int));

  puts("Input array:");
  for(int i = 0; i < numsSize; i++){
    scanf("%d", &nums[i]);
  }

  puts("Input target:");
  scanf("%d", &target);

  //finds the correct value for target
  for(int i = 0; i < numsSize; i++) {
    for (int j = i + 1; j < numsSize; j++) {
      if (nums[i] + nums[j] == target) {
        returnSize[0] = j;
        returnSize[1] = i;
        break;
      }
    }
  }

  printf("Return size is [%d, %d]\n", returnSize[0],returnSize[1]);

  free(nums);

  return 0;
}