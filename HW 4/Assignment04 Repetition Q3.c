#include <stdio.h>
#include <math.h>

int main(void) {
  double ex=1, x, num =1, deno =1;
  int n, i;
  printf("Enter value of x: ");
  scanf("%lf", &x);
  printf("Enter number of terms (n): ");
  scanf("%d", &n);
  for(i=1; i<n; i++){
    num*= x;
    deno*= i;
    ex += (num/deno);
  }
  printf("The appropriate value of e^%.0f: %.12f\n", x, ex);
  printf("The value of e^%.0f using C library function: %.12f\n", x, ex);
  printf("The absolute difference between the two values: %.12f\n", fabs(ex-exp(x)));
  return 0;
}