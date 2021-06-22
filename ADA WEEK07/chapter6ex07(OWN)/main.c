/* This program calculates the hypotenuse of a right triangle*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float a, b, c, h;
	printf ("Instert side a:");
	scanf ("%f", &a);
	printf ("Instert side b:");
	scanf ("%f", &b);
	c= (a*a+b*b);
	h= pow(c, 0.5);
	printf ("The hypotenuse of the right triangle is: %f", h);
	
	getch();
	return 0;
}
