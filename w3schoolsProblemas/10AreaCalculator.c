#include <stdio.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    char shape[20];
    scanf("%s", shape);
  	double area;
  
  	if (strcmp(shape,"rectangle")==0) {
    	int a, b; 
      scanf("%d", &a);
      scanf("%d", &b);
      
      area = (float) a*b;
      
    }
  
  	else if (strcmp(shape, "triangle")==0) {
    	int a, b; 
      scanf("%d", &a);
      scanf("%d", &b);
      
      area = (float) (a*b)/2;
      
    }
  	else if (strcmp(shape, "circle")==0) {
    	int r; 
      scanf("%d", &r);
      
      area = r*r*M_PI;
    
    }
     
		printf("Area: %.2lf", area);

    return 0;
}
