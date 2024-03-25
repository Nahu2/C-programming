#include <stdio.h>

int main(void) {
  int x, i=0, min, max;
  printf("Enter the first number: ");
  scanf("%d", &x);
  min = x;
  max = x;
  while(i<9){
    
    printf("Enter the next number: ");
    scanf("%d", &x);
    if(x<min){
      min = x;
    }
    if(x>max){
      max = x;
    }
    i++;
    
  }
  printf("The smallest number is %d\n",min);
  printf("The largest number is %d\n",max);
  return 0;
}