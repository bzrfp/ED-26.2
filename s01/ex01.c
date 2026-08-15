/* O número 3025 possui a seguinte propriedade:
30+25 = 55 e 55^2 = 3025.
Faça um algoritmo que leia um número de 4 dígitos e mostre se esse número tem essa propriedade ou não. */

#include <stdio.h>

int main () {

    int num, primeiraParte, segundaParte, soma;

    printf("informe um número com 4 dígitos: ");
    scanf("%d", &num);

    //obtendo os dois primeiros dígitos
    primeiraParte = num / 100;

    //obtendo os dois últimos dígitos 
    segundaParte = num % 100; 

    soma = primeiraParte + segundaParte; 

    //saída
    if (soma*soma == num) 
        printf("O número possui a propriedade\n");
    else
        printf("O número não possui a propriedade\n");

    return 0;
}
