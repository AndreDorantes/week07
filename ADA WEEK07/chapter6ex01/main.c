#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float a, b, c, d, e;
	printf("Insert the coordinates in x of the first point: ");
	scanf("%f",&a);
	printf("\n Insert the coordinates in y of the first point: ");
	scanf("%f",&b);	
	printf("\n Insert the coordinates in x of the second point: ");
	scanf("%f",&c);
	printf("\n Insert the coordinates in y of the second point: ");
	scanf("%f",&d);
	e= (c-a)*(c-a)+(d-b)*(d-b);
	printf ("The square distance of the points is: %f", e);
	getch();
	
	return 0;
}
