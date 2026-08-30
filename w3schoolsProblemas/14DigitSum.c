#include <stdio.h>

int main() {
    int n, total = 0;
    scanf("%d", &n);
  
  	for (int i = n; i > 0; i/=10) {
    	total += i%10;
    }

		printf("Digit sum: %d", total);   
    return 0;
}
