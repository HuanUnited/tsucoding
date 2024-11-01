#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main() {
  float farenheight, celcius;
  printf("Enter Farenheight: ");
  scanf("%f", &farenheight);
  celcius = (farenheight - FREEZING_PT) * SCALE_FACTOR;
  printf("Celcius equivalent: %.1f \n", celcius);
  return 0;
}