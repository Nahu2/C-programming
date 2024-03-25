#include <stdio.h>
#include <math.h>

int main(void) {
  double KilometersConversion = 1.60934;
  double miles, Kilometers;
  printf("Enter the distance in miles: ");
  scanf("%lf", &miles);
  Kilometers = KilometersConversion * miles;
  printf("The distance of %.1f miles is equal to %.3f kilometers.\n", miles, Kilometers);
  return 0;
}