#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char firstName[50], lastName[50];
    scanf("%s", firstName);
    scanf("%s", lastName);
  	char username[100];
    char initials[3];

  	//concatenando o username
    strcat(username, firstName);
  	strcat(username, lastName);
  
  	//criando a string com iniciais 
  	initials[0] = firstName[0];
  	initials[1] = lastName[0];
  	initials[2] = '\0';
  
  	for (int i = 0; username[i] != '\0'; i++) {
      username[i] = tolower(username[i]);
    }
  
    for (int j = 0; initials[j] != '\0'; j++) {
      initials[j] = toupper(initials[j]);
    }

    printf("Username: %s\n", username);
  	printf("Initials: %s", initials);
      
    return 0;
}
