#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Сортировка строк матрицы по возрастанию первых элементов
// Sorting matrix rows by ascending order of the first elements

int random110(int min, int max) {
    return rand() % (max + 1 - min) + min;
}

// Function to swap rows of the matrix
void swap_rows(int* row1, int* row2, int c) {
    for (int i = 0; i < c; i++) {
        int temp = row1[i];
        row1[i] = row2[i];
        row2[i] = temp;
    }
}

int main() {
    int r, c;

    printf("Input number of rows: ");
    scanf("%d", &r);

    printf("Input number of columns: ");
    scanf("%d", &c);

    // Allocate memory for the matrix
    int *arr[r];
    for (int i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    // Seed the random number generator once
    srand(time(0));

    // Fill the matrix with random numbers between 1 and 9
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = random110(1, 9);
        }
    }

    // Print the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // Sort the rows based on the first element in each row
    for (int i = 0; i < r - 1; i++) {
        for (int j = i + 1; j < r; j++) {
            if (arr[i][0] > arr[j][0]) {
                // Swap rows if the first element of row `i` is greater than row `j`
                swap_rows(arr[i], arr[j], c);
            }
        }
    }

    // Print the sorted matrix
    printf("Sorted matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < r; i++) {
        free(arr[i]);
    }

    return 0;
}