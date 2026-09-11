//converte uma sequencia de caracteres numericos para inteiro 
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 20

int converte () {
    
    char c;
    char num[MAX] = "";
    int valor = 0;
    
    scanf("%c", &c);
    
    while (c != ' ' && c != '\n') {
        char a[2];
        a[0] = c;
        a[1] = '\0';
        
        strcat(num, a);
        scanf("%c", &c);
    }
    
    
    for (int i = 0; i< strlen(num); i++) {
        
        int digito = num[i] - '0';
        
        valor += digito * pow(10, strlen(num) - 1 - i);
    }
    
    return valor;
    
}

int main () {
    
    int valor = converte();
    printf("%d", valor);
    return 0;
}
