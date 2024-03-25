#include <stdio.h>
#include <ctype.h>
int main(void){
    char grade;
    int countA=0, countB=0, countC=0, countD=0, countF=0;
    printf("Enter End-of-File (EOF) to end input. Enter the letter Grades :\n");

    while((grade = getchar())!=EOF){
    switch(toupper(grade)){
        case 'A': 
        //case 'a':
            countA++;
            break;
        case 'B':
        //case 'b':
            countB++;
            break;
        case 'C':
        //case 'c':
            countC++;
            break;
        case 'D':
        //case 'd':
            countD++;
            break;
        case 'F':
        //case 'f':
            countF++;
            break;
        case '\n':
            break;
        default:
            printf("Invalid Letter Grade Entered! Enter a new letter grade :\n");
    }
    }
    printf("EOF is entered. Total for each letter grade are :");
    printf("\nA=%d", countA);
    printf("\nB=%d", countB);
    printf("\nC=%d", countC);
    printf("\nD=%d", countD);
    printf("\nF=%d", countF);
    printf("Number of students pass the exam: %d\n", countA+countB+countC );
    printf("Number of students fail the exam: %d\n", countD+countF);
    return 0;
}