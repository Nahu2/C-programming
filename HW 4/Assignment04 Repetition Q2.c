#include <stdio.h>

int main(void) {
  float score, avg, total=0;
  int pass=0, fail=0, count =0;
  while(score!=-1){
    printf("Enter exam score(-1 to exit):");
    scanf("%f", &score);

    if(score>=0 && score<=100){
      total=total + score;
      count++;
      if(score>=50){
        pass++;
      } 
      else {
        fail++;
      }
    }
    else 
      if(score!=-1){
        printf("You have entered an invalid exam score.\n");
      }

  }
  avg=total/count;
  printf("The average of these exam scores: %.2f \n", avg);
  printf("Number of students have exam score >= 50: %d \n", pass);
  printf("Number of students have exam score < 50: %d \n", fail);
  return 0;
}