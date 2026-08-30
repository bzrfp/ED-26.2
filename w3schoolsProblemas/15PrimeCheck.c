#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
  	int divisores = 0;

	for (int i = 2; i <= sqrt(n); i++) {
    int resultadoInteiro;
    double resultadoReal;
    
    resultadoInteiro = n/i;
    resultadoReal = (double) n/i ;
    
    if (resultadoInteiro == resultadoReal)
    	divisores++;
  }
  
  if(divisores)
    printf("Not prime");
  else
    printf("Prime");
  
    return 0;
}
