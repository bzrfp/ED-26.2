#include <stdio.h>
#include <math.h>

char binario[33];

char* binary (int x) {
    
    int impar = x % 2;
    
    if (impar) {
        binario[31] = '1';
        x--;
    }
    else
        binario[31] = '0';
    
    for (int p = 31; p != 0; p--) {
    
        if (x-pow(2, p) >= 0) {
            binario[31-p] = '1'; 
            
            x = x - pow(2, p);
        }
        else
            binario[31-p] = '0';
        
    }
    
    binario[32] = '\0';
    
    return (binario);
}

int main () {
    
    int num;
    
    scanf("%d", &num);
    char *binario = binary(num);
    
    printf("%s", binario);
}
