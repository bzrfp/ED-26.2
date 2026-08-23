#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
		int result;
      
  	for(int i=1; i != 11; i++) {
    	result = n * i;
      printf("%d x %d = %d\n", n, i, result);
    }
      
    return 0;
}
