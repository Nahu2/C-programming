#include <stdio.h>

int main(void) {
  int range[9]={0}, index;
  float gross, commission;
  while(1){
  printf("Enter employee gross sales (-1 to end) : ");
  scanf("%f", &gross);
    if(gross==-1){
      break;
    }
  commission=200+0.09*gross;
  if((index = (((int) commission)/100)-2)>8){
    index=8;
  }
  printf("Employee Commission is %.2f\n", commission);
  range[index]++;
  }
  printf("Number of employees in the salary range :\n");
  for(int i=0; i<=7; i++){
    printf("$%d00 - $%d99 : %d\n", i+2, i+2, range[i]);
  }
  printf("$1000 and Over: %d\n", range[8]);
    
  return 0;
}