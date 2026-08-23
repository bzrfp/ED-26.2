#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
		int sum = 0;
    
  	for (int i = 0; i < n; i++) {
    	
      int entry;
      scanf("%d", &entry);
    
      sum = sum + entry;  
    
    }

   	printf("Sum: %d", sum);
    return 0;
}
