#include <stdio.h>

int main() {
    int celsius;
  	float fahrenheit;
  
    scanf("%d", &celsius);

    fahrenheit = (float) celsius * 9/5 + 32;

    printf("%d Celsius = %.1f Fahrenheit", celsius, fahrenheit);
    return 0;
}
