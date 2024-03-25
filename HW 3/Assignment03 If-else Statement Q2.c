#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c, y;
    float real, real1, real2, imaginary, realPart;
    printf("Enter the values of a, b and c:");
    scanf("%lf %lf %lf", &a, &b, &c);
    y=pow(b,2)-(4*a*c);
    if (y>0){
        //y>0
        real1=(-b+sqrt(y))/(2*a);
        real2=(-b-sqrt(y))/(2*a);
        printf("x1 = %.4f, x2 = %.4f\n", real1, real2);
    }
    else if (y==0){
        //y=0
        real=(-b)/(2*a);
        printf("x = %.4f\n", real);
    }
    else {
        //y<0
        realPart=(-b)/(2*a);
        imaginary=(sqrt(fabs(y)))/(2*a);
        printf("x1 = %.4f + i*%.4f\n", realPart, imaginary);
        printf("x2 = %.4f - i*%.4f\n", realPart, imaginary); 
    }
    return 0;
}
