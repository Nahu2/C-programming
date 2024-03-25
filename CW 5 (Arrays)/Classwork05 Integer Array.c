#include <stdio.h>
#define SIZE 100

int main(void) {
  int nat[SIZE], i;
  printf("Original array: ");
  for(i=0; i<=SIZE; i++){
    nat[i] =i+1;
    printf("%d ",nat[i]);
  }
  printf("\n\nNumbers containing digit 7 or divisible by 7:\n");
  for(i=0;i<SIZE; i++){
    if(nat[i]%7==0 || nat[i]%10==7){
      printf("%d ", nat[i]);
    }
  }
  return 0;
}