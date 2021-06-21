#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a, t, x;
	printf ("Insert the price: ");
	scanf ("%f", &a);
	t= a*1.08; 
	printf ("The total to pay is %0.1f", t);
	getch ();
	
	return 0;
}
