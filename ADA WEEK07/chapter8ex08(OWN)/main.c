#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {
	float a, b, c;
	float x1, x2, D;
	printf ("This program resolves cuadratic ecuations \n");
	printf ("This is the cuadratic form ax^2+bx+c = 0 \n");
	printf ("Insert the value of a: \n");
	fscanf (stdin, "%f", &a);
	printf ("Insert the value of b: \n");
	fscanf (stdin, "%f", &b);
	printf ("Insert the value of c: \n");
	fscanf (stdin, "%f", &c);
	if (a !=0) {
		  D = b*b-4*a*c;  //pow(b, 2)
		  if (D >= 0) {
		  	x1= (-b + pow(D, 0.5))/(2*a);
			x2= (-b - pow(D, 0.5))/(2*a);
			printf ("The solutions are: \n");
			printf ("x1= %f \n", x1);
			printf ("x2= %f \n", x2);
		  }
		  else 
		    	printf ("The roots are complex");
	}
	else if (b = 0) {
		x1 = -c/b;
			printf ("The only solution is: %f", x1);
	}
	else printf ("There is no valid solution");
	
	return 0;
}
