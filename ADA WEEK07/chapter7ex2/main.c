#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int y, m, d, t;
	/* From 6/6/90 tp 6/6/91 there are 366 days */
	y= 1992-1991;
	y= y*366;
	/* From 6/6/91 to 6/3/92 there are 9 months, but september and novemeber have 30 days and february 28*/
	m= 5*31 + 3*30 + 28;
	/* From march 6 to april 4 there are 28 days  */
	d= 28;
	/* The total days is the sum om y + m + d */
	t= y+m+d;
	printf ("The total days are: %i", t);
	
	getch();
	return 0;
}
