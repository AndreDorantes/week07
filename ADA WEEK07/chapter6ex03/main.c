#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float a;
	printf ("Insert the numeric grade:");
	scanf ("%f", &a );
	if (a<61) 
		printf ("Your score is F");
		else 
		    if (a>=61 && a<64)
		     printf ("Your score is D-");
		     else 
		    if (a>=64 && a<68)
		     printf ("Your score is D");
		     else 
		    	if (a>=68 && a<71)
		    	 printf ("Your score is D+");
		    	 else 
		     	 	if (a>=71 && a<74)
		    	     printf ("Your score is C-");
		    	    	else 
		     	 			if (a>=74 && a<78)
		    	    		 printf ("Your score is C");
		    	    		else 
		     	 			 if (a>=78 && a<81)
		    	    		 printf ("Your score is C+");
			            	else 
				            	if (a>=81 && a<84)
				               	printf ("Your score is B-");
				               	else 
				            		if (a>=84 && a<88)
				               		printf ("Your score is B");
				               			else 
				            			if (a>=88 && a<91)
				               			printf ("Your score is B+");
				          					else 
				          					if (a>=91 && a<94)
				          				 	printf ("Your score is A-");
				          				 	else 
				          						if (a>=94 && a<98)
				          				 		printf ("Your score is A");
				          				 		else 
				          							if (a>=98 && a<=100)
				          				 			printf ("Your score is A+");
	getch();			          				 			
	return 0;
}
