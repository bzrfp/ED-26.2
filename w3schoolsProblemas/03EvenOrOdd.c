#include <stdio.h>

int main() {
    int n, resto;
    scanf("%d", &n);
  
  	resto = n%2;
      
    if (resto == 0)
      printf("Even");
  	else
      printf("Odd");
  
    return 0;
}
