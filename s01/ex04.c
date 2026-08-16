//calculadora
#include <stdio.h>

int main () {

    int operador, resultado, num1, num2; 
    float quociente;

    while (1) {

        printf("Escolha uma operação (1 -- +, 2 -- -, 3 -- *, 4 -- /, 5 - sair): \n");
        scanf("%d", &operador);

        if (operador == 5) 
            break;
        else {
            printf("informe o primeiro número: \n");
            scanf("%d", &num1);

            printf("informe o segundo número: \n");
            scanf("%d", &num2);

            if (operador == 1) {
                resultado = num1 + num2;
                printf("%d\n", resultado);
            }
            else if (operador == 2) {
                resultado = num1 - num2;
                printf("%d\n", resultado);
            }
            else if (operador == 3) {
                resultado = num1 * num2; 
                printf("%d\n", resultado);
            }
            else if (operador == 4) {
                
                if(num2 == 0) {
                    printf("operação inválida!\n");
                }
                else {
                    quociente = (float) num1 / num2;
                    printf("%.2f\n", quociente);

                }

            }
            else {
                printf("operação inválida!\n");
            }
        }

    }


}
