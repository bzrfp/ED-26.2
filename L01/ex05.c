//verifique se o número é divisível por 3 e por 5
#include <stdio.h>
#include <stdbool.h>

int main () {

    int a, qit, qic;
    float qrt, qrc;
    bool ptres, pcinco;

    ptres = 0;
    pcinco = 0; 

    printf("Informe um número inteiro: \n");
    scanf("%d", &a);

    // divisão inteira 
    qit = a/3;
    qic = a/5;

    // divisão racional
    qrt = (float)a/3;
    qrc = (float)a/5; 

    if (qit == qrt)
        ptres = 1; 
    
    if (qic == qrc)
        pcinco = 1;

    //saída
    if (ptres && pcinco)
        printf("O número cumpre a condição\n");
    else if (ptres)
        printf("O número é divisível apenas por três\n");
    else if (pcinco)
        printf("O número é disivísel apenas por cinco\n");

}
