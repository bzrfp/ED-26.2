#include <stdio.h>

int main () {

char palavra[100];
int zerosMaior = 0;
int zerosAtual = 0;

scanf("%s", palavra);

for (int i = 0; palavra[i] != '\0'; i++) {
	if (palavra[i] == '0'){
		zerosAtual = 1;
		
		for (int j = i; palavra[j] == '0'; j++) {
		    zerosAtual++;
		}
	 
	 	if (zerosAtual > zerosMaior)
	    zerosMaior = zerosAtual-1;
	}

}

printf("O tamanho da maior cadeia é: %d\n ", zerosMaior);

return 0;

}
