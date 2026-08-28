#include <stdio.h>
#include <string.h>

int main () {

    int qtd;
    char msg[1000], passoUm[1000], passoDois[1000], passoTres[1000];

    passoUm[0] = '\0';
    passoDois[0] = '\0';

    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        scanf("%s", &msg);
        int tamanho = strlen(msg);
    

        for (int j = 0; msg[j] != '\0'; j++) {

            if ((msg[j] <= 90 && msg[j] >= 65) || ( msg[j] >= 97 && msg[j] <= 122)){
                int simbolo = msg[j] + 3;
                strcat(passoUm, (char) simbolo);
            }
            else
                strcat(passoUm, msg[j]);

        }

        for (int k = tamanho-1; k >= 0; k--) {
            strcat(passoDois, passoUm[k]);
        }

        for (int l = tamanho/2; passoDois[l] != '\0'; l++){
            strcat(passoTres, passoDois[l]);
        }

        printf("%s", passoTres);
    }
}
