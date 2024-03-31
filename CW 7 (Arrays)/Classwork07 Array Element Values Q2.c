#include <stdio.h>
#define SIZE 5
int main(void) {
  int resistance[SIZE]={16, 27, 39, 56, 81};
  int i;
  double current[SIZE], voltage[SIZE], power[SIZE], totPower=0;
  for(i=0;i<SIZE;i++){
    printf("Enter the value of current: ");
    scanf("%lf", &current[i]);
    voltage[i]=resistance[i]*current[i];
    power[i]=voltage[i]*current[i];
    totPower+=power[i];
  }
  printf("%10s%10s%10s%10s\n","Resistance", "Current", "Voltage", "Power");
  for(i=0;i<SIZE;i++){
    printf("%10d%10.2f%10.2f%10.2f\n", resistance[i], current[i], voltage[i], power[i]);
  }
  printf("%30s%10.2f\n","Total", totPower);
  return 0;
}