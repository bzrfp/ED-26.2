#include <stdio.h>

long factorial(int n) {
  	long fac = 1;
    for(int i = 1; i<=n; i++) {
  	  	fac = fac * i;
    } 
  	return fac;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d! = %ld\n", num, factorial(num));
    return 0;
}
