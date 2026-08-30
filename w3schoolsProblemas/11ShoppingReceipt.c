#include <stdio.h>

int main() {
    char item[100];
    double price;
    int quantity;
    scanf("%s", item);
    scanf("%lf", &price);
    scanf("%d", &quantity);

  	double total = price*quantity;
  
    printf("Item: %s \n", item);
  	printf("Price: %.2lf \n", price);
  	printf("Quantity: %d \n", quantity);
  	printf("Total: %.2lf \n", total);
    return 0;
}
