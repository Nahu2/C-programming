#include <stdio.h>
#include <math.h>

int main(void) {
  double x,y,z;
  printf("Enter value for x and y: ");
  scanf("%lf %lf",&x,&y);
  z=y*(pow(x,2)-pow(y,2))/(pow(x,2)+3*x*y);
  printf("z = %f\n",z);
  return 0;
}