#include <stdio.h>

#define PI 3.1415
#define FRACTION (4.0f/3.0f)

int main(){
    float r;
    printf("Input radius: ");
    scanf("%f", &r);
    printf("Volume = %.2f\n", PI*FRACTION*r*r*r);
    return 0;
}