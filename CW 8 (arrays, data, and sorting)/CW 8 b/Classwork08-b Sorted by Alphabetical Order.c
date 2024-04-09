#include <stdio.h>
#define MAXLINE 100
#define MAXCHAR 20
#include <string.h>

int main(void) {
  char country[MAXLINE][MAXCHAR], temp_country[MAXCHAR];
  float pop[MAXLINE], temp_pop;
  int i=0, iter;
  FILE *fp;
  if((fp=fopen("population.txt","r"))==NULL){
    printf("FILE NOT FOUND\n");
  } else {
    while(!feof(fp)){
      fscanf(fp, "%s %f\n", country[i], &pop[i]);
      i++;
    }
    fclose(fp);

    //Bubble Sort
    
    unsigned int SIZE = i;

    for(int iter=0; iter<SIZE-1; iter++)
    {
      for(i=0; i<SIZE-1-iter; i++)
      {
        if(country[i][0]>country[i+1][0])
        {
          strcpy(temp_country, country[i]);
          strcpy(country[i], country[i+1]);
          strcpy(country[i+1], temp_country);
          temp_pop = pop[i];
          pop[i] = pop[i+1];
          pop[i+1] = temp_pop;
        }
      }
    }

    //End of Bubble Sort
    printf("%-13s%s\n", "Country", "Population (Millions)");
    for(i=0;i<SIZE;i++){
      printf("%-13s%.2f\n", country[i], pop[i]);
    }
    
  }
  return 0;
}