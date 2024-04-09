#include <stdio.h>
#define MAXLINE 100
#define MAXCHAR 50
int main(void) {
  int account[MAXLINE], i=0, j;
  float balance[MAXLINE];
  char name[MAXLINE][MAXCHAR];
  FILE *fpr, *fpw;
  fpr = fopen("data.txt", "r");
  fpw = fopen("newdata.txt", "w");
  if(fpr==NULL){
    printf("File  not found.\n");
  }else{
  while(!feof(fpr)){
    fscanf(fpr, "%d %s %f\n", &account[i], name[i], &balance[i]);
    i++;
  }
  printf("%-10s%-12s%s\n", "Account", "Name", "Balance");
  for(j=i-1;j>=0;j--){
    printf("%-10d%-12s%.2f\n", account[j], name[j], balance[j]);
    fprintf(fpw ,"%-10d%-12s%.2f\n", account[j], name[j], balance[j]);
  }
    fclose(fpr);
  }
  fclose(fpw);
  return 0;
}