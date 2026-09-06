//transforma maiusculas em minusculas e vice-versa
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    
    char palavra[100];
    char resposta[100] = "";
    
    fgets(palavra, sizeof(palavra), stdin);
    
    for (int i = 0; palavra[i] != '\0'; i++) {
        
        if (palavra[i] == ' ')
            strcat(resposta, " ");
            
        else if (toupper(palavra[i]) == palavra[i]) {
            
            char prov[2];
            prov[0] = tolower(palavra[i]);
            prov[1] = '\0';
            
            strcat(resposta, prov);
        }
            
        else {
            char prov[2];
            prov[0] = toupper(palavra[i]);
            prov[1] = '\0';
            
        strcat(resposta, prov);
        }
    }
    
    printf("%s\n", resposta);
    
    return 0;
}
