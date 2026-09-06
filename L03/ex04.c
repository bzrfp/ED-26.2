//decide se pode ver o filme
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    
    int idade;
    char classificacao[30];
    int acompanhado;
    
    scanf("%d", &idade);
    scanf("%s", classificacao);
    scanf("%d", &acompanhado);
    
    char livre[5] = "livre";
    char violento[8] = "violento";
    
    if (classificacao == livre) {
        printf("sim\n");
    } 
    
    else if (classificacao != violento && idade >= 14) {
        printf("sim\n");
    }  
    
    else if (acompanhado && idade > 14) {
        printf("sim\n");
    } 
    
    else if (idade >= 16) {
        printf("sim\n");
    } 
    
    else {
        printf("não\n");
    }
    return 0;
}
