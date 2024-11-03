#include <stdio.h>
#include <stdlib.h>

// Dynamically allocate an array and 6. 
// Дан массив A и число i. Найти среднее арифметическое всех элементов 
// массива, кроме A[i]. 


int main(){
    int *mas, n, giveni;
    puts("Input size of array:");
    scanf("%d", &n);
    mas = (int *)malloc(n *(sizeof(int)));

    puts("Input array:");
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        printf("index %d now has the value %d\n",i, mas[i]);
    }
    
    puts("Input chosen index");
    scanf("%d", &giveni);

    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i != giveni){
            sum += mas[i];
            printf("the sum is now %d\n",sum);
        }
    }

    printf("the sum is %d\n", sum);
    free(mas);
    printf("memory freed\n");
    return 0;
}