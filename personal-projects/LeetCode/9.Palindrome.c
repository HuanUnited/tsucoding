#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Accepted Solution

int lengthHelper(int x) {
  if (x >= 1000000000)
    return 10;
  if (x >= 100000000)
    return 9;
  if (x >= 10000000)
    return 8;
  if (x >= 1000000)
    return 7;
  if (x >= 100000)
    return 6;
  if (x >= 10000)
    return 5;
  if (x >= 1000)
    return 4;
  if (x >= 100)
    return 3;
  if (x >= 10)
    return 2;
  return 1;
}

int main() {
  int p_number, *digitarray;

  puts("Input x");
  scanf("%d", &p_number);
  int length = lengthHelper(abs(p_number));

  if(p_number < 0){
    return 0;
  }

  digitarray = (int *)malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
      int digit = p_number % 10;
      p_number /= 10;
      digitarray[(length - 1) - i] = digit;
    }

  for (int i = 0; i < length; i++) {
    printf("%d ", digitarray[i]);
  }

  int palincomp = 0;
  for (int i = 0; i < length / 2; i++) {
    if (digitarray[(length - 1) - i] == digitarray[i]) {
      palincomp++;
    }
  }
  
  free(digitarray);

  if (palincomp == length / 2) {
    printf("palindrome\n");
  } else {
    printf("not palindrome\n");
  }


  return 0;
}