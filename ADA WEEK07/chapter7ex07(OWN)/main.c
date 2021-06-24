/* This program calculates the area of a triangle with the heron formula */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {
	float a, b, c, s, A;
	printf ("This program calculates the area of a triangle with the heron formula \n");
	printf ("Introduce the first side of the triangle: ");
	fscanf (stdin, "%f", &a);
	printf ("Introduce the second side of the triangle: ");
	fscanf (stdin, "%f", &b);
	printf ("Introduce the third side of the triangle: ");
	fscanf (stdin, "%f", &c);
	s= 0.5*(a+b+c);
	A= pow(s*(s-a)*(s-b)*(s-c),0.5);
	printf ("The area of the triangle is: %f",A);
	
	getch();
	return 0;
}
