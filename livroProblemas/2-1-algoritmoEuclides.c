//simplifica uma função usando o algoritmo de euclides

#include <stdio.h>

int MDC(int a, int b) {
    
    
    int dividendo = a;
    int divisor = b;
    int divisor_anterior;
    
    while (divisor != 0) {
        
        divisor_anterior = divisor;
        divisor = dividendo % divisor;
        dividendo = divisor_anterior;
    }
    
    return divisor_anterior;
}

int main () {
    
    int a, b, mdc;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    mdc = MDC(a, b);
    
    printf("%d / %d", a/mdc, b/mdc);
    
    return 0;
}
