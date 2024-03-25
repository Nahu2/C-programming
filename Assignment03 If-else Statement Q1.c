#include <stdio.h>
#include <math.h>

int main(void) {
    int bars;
    float discount, barPrice = 1.99;
    printf("How many chocolate bars do you want?: ");
    scanf("%d", &bars);
    if (bars >= 150 && bars <= 300){
        // 15% discount
        discount = 1 - 0.15;
    }
    else if (bars >=301 && bars <=500){
        // 17% discount
        discount = 1 - 0.17;
    }
    else if (bars >= 501){
        // 19% discount
        discount = 1 - 0.19;
    }
    else {
        // 0% discount
        discount = 1;
    }
    float totalPrice = 1.07 * ((barPrice * bars) * discount);
    printf("Total price (+7%% sales tax) = $%.2f\n",totalPrice);
    return 0;
}