#include <stdio.h>

int main(void) {
  int data[]={23, 56,2,-12,0}, i, temp;
  unsigned int SIZE = sizeof data / sizeof (int);
  for(i=0;i<SIZE; i++){
    printf("%d ", data[i]);
  }
  printf("\n");

  for(int iter=0; iter<SIZE-1; iter++){
    for(i=0; i<SIZE-1-iter; i++){
      if(data[i]>data[i+1]){
        temp = data[i];
        data[i] = data[i+1];
        data[i+1] = temp;
      }
    }
  }

  for(i=0;i<SIZE; i++){
    printf("%d ", data[i]);
  }
  printf("\n");
  return 0;
}