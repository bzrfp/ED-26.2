#include <stdio.h>

int main () {

char palavra[100];
char letra; 

scanf("%s \n", palavra);
scanf("%c", &letra);

for (int i = 0; palavra[i] != '\0'; i++) {
	if (palavra[i] == letra)
		break;

    printf("%c", palavra[i]);	

}

return 0;

}
