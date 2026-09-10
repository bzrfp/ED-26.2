//simplifica uma função usando o algoritmo de euclides

#include <stdio.h>

typedef struct fracao {
    
    int numerador;
    int denominador;
} Fracao;

int MDC(Fracao f) {
    
    int dividendo = f.numerador;
    int divisor = f.denominador;
    int divisor_anterior;
    
    while (divisor != 0) {
        
        divisor_anterior = divisor;
        divisor = dividendo % divisor;
        dividendo = divisor_anterior;
    }
    
    return divisor_anterior;
}

int main () {
    
    Fracao r;
    int mdc;
    
    scanf("%d", &r.numerador);
    scanf("%d", &r.denominador);
    
    if (r.denominador == 0) {
        printf("denominador invalido");
        return 1;
    }
    
    mdc = MDC(r);
    
    printf("%d / %d", r.numerador/mdc, r.denominador/mdc);
    
    return 0;
}
