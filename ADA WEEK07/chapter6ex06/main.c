#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float a, b, p, p2, o;
	printf ("Insert the number of hours worked: ");
	scanf ("%f", &a);
	printf ("Insert the the hourly wage: ");
	scanf ("%f", &b);
	p= a*b;
	o= a-40;
	p2= (40*b)+o*(1.5*b);
	if (a<=40)
	printf ("Your pay is %f", p);
	else 
	printf ("Your par is %f", p2);
	getch();
	
	return 0;
}
