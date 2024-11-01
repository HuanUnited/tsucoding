#include <stdio.h>

int main(){
  int n, c;
  scanf("%d%d", &n,&c);
  int t[1001];
  for (int i = 0; i < n; i++){
    scanf("%d", &t[i]);
  }

  int lst = -1, candy = 0;

  for (int i = 0; i < n; i++){
    if (t[i] - lst >= c || lst == -1){
      candy++;
      lst = t[i];
    } 
  }

  printf("%d\n", candy);
  return 0;
}