#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
		float a, b, c, d, e, By, Kb, Mb, Gb, Kbt, Mbt, Gbt;
	printf ("Select what size the file is \n");
	printf ("[1] For byte \n");
	printf ("[2] For kilobyte \n");
	printf ("[3] For megabyte \n");
	printf ("[4] For gigabyte \n");
	printf ("Please enter your choice: \n");
	scanf ("%f", &a);
	if (a==1){
			printf ("Please introduce file size: \n");
			scanf("%f", &b);
			By= b/960;
			printf (":%f", By);}
				else 
				if(a==2){
						printf ("Please introduce file size: \n");
						scanf("%f", &c);
						Kb= 1000*c;
						Kbt= Kb/960;
						printf (":%f", Kbt);}
					else 
					if(a==3){
							printf ("Please introduce file size: \n");
							scanf("%f", &d);
							Mb= 1000000*d;
							Mbt= Mb/960;
							printf (":%f", Mbt);}
						else 
						if (a==4){
									printf ("Please introduce file size: \n");
									scanf("%f", &e);
									Gb= 1000000000*e;
									Gbt= Gb/960;
									printf (":%f", Gbt);}
							else 
											printf ("Why? :/");
	
	getch();
	return 0;
}
