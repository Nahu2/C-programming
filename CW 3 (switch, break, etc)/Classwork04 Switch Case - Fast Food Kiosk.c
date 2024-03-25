#include <stdio.h>

int main(void) {
  int item;
  float price;
  printf("Pick one of the following items from our menu:");
  printf("[1] Double Cheese Burger - $5.00\n");
  printf("[2] Spicy Chicken Sandwich - $3.99\n");
  printf("[3] Shrimp Tacos - $4.50\n");
  printf("[4] Chocolate Ice Cream Cone - $1.99\n");

  do{
  scanf("%d", &item);
  switch(item){
    case 1: price=5.00; break;
    case 2: price=3.99; break;
    case 3: price=4.50; break;
    case 4: price=1.99; break;
    default: printf("Invalid item number! Re-enter item number: ");
  }
  }while(item!=1 && item!=2 && item!=3 && item!=4);
  return 0;
}