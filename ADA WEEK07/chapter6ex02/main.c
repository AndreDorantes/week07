#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	float a;
	printf ("Insert the numeric grade:");
	fscanf (stdin, "%f", &a );
	if (a<61) 
		printf ("Your score is F");
		else 
		    if (a>=61 && a<71)
		     printf ("Your score is D");
		     else 
		     	 	if (a>=71 && a<81)
		    	     printf ("Your score is C");
		    	    	else 
				            if (a>=81 && a<91)
				               	printf ("Your score is B");
				               	else 
				          					if (a>=91 && a<=100)
				          				 	printf ("Your score is A");
				          				 	else
				          				 	printf ("The range in from 0-100"); 
				          						
	
	getch();
	
	return 0;
}
