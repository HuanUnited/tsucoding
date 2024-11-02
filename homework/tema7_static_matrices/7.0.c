#include <stdio.h>
#include <stdlib.h>

int random110() {
    return rand() % 9 + 1;
}

int main() {
  int n = 5;
  int m = n;
  int mas[n][m];

  
  // Initialize the array
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mas[i][j] = 0;
    }
  }
  
  // Fill main diagonal
  for (int i = 0; i < n; i++) {
    mas[i][i] = random110();
  }

  // Fill secondary diagonal
  for (int i = 0; i < n; i++) {
    mas[i][n - 1 - i] = random110();
  }

  // Print the array
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", mas[i][j]);
    }
    printf("\n");
  }

  return 0;
}