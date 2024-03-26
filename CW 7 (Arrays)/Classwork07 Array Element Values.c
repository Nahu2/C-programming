#include <stdio.h>
#define SIZE 10

int main(void) {
  int data[SIZE]={20, 9, 12, 4, 15, 7, 10, 2, 18, 8}, i, j;
  printf("%-10s%-8s%s\n","Element","Value","Histogram");
  for(i=0; i<SIZE; i++){
    printf("%-10d%-8d", i, data[i]);
    for(j=0;j<data[i];j++){
      putchar('*');
    }
    printf("\n");
  }
  return 0;
}