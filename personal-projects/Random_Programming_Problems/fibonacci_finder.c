#include <stdio.h>
#include <stdlib.h>

// return the fibonaci number at n formula : fn = fn-1 + fn-2
// ex: 0 1 1 2 3 5 8 13 21

// 1. use loops
// 2. arrays
int main() {

  int n,*f;

  puts("Give me your number n");
  scanf("%d", &n);

  f = (int *)malloc(n*sizeof(int));

  f[1] = 1,f[0] = 0;

 if(n == 1 || n == 0){
      printf("F(%d) is %d\n", n, n);
  } else{
      for (int i = 2; i <= n; i++){
          f[i] = f[i-1] + f[i-2];
      }
      printf("F(%d) is %d\n", n, f[n]);
  }
  for(int i = 0; i <= n; i++){
    printf("%d ",f[i]);
  }

/*
  int n,fnm1 = 1,fnm2 = 0,fn;
  puts("Give me your number n");
  scanf("%d", &n);

if(n == 1 || n == 0){
      printf("F(%d) is %d\n", n, n);
  } else{
      for (int i = 2; i <= n; i++){
          fn = fnm1 + fnm2;
          fnm2 = fnm1;
          fnm1 = fn;
      }
      printf("F(%d) is %d\n", n, fn);
  }  
*/
  return 0;
}