#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int q, d, n, p, t;
	printf ("Insert the amount cents (less than $1.00):");
	scanf("%i", &t);
	q= t/25;
	t= t%25;
	d= t/10;
	t= t%10;
	n= t/5;
	t= t%5;
	p= t;
	printf ("The number of number of quarters is %i \n", q);
	printf ("The number of number of dimes is %i \n", d);
	printf ("The number of number of nickels is %i \n", n);
	printf ("The number of number of pennies is %i \n", p);
	getch();
	
	return 0;
}
