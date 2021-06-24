#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int a;
	float b, c, d, e, Km, C, Kg, L;
	printf ("Select what would you like to be converteds from English units to metric units \n");
	printf ("[1] For Distance \n");
	printf ("[2] For Temperature \n");
	printf ("[3] For Volume \n");
	printf ("[4] For Mass \n");
	printf ("Please enter your choice: \n");
	fscanf (stdin, "%i", &a);
	if (a==1){
			printf ("Please introduce the miles you want to convert to kilometers: \n");
			fscanf(stdin, "%f", &b);
			Km= b*1.60934;
			printf ("The convertion to kilometers is:%f", Km);}
				else 
				if(a==2){
						printf ("Please introduce the temperature in fahrenheit you want to convert to celcius: \n");
						fscanf(stdin, "%f", &c);
						C= (c-32)*0.5555;
						printf ("The convertion to celcius is:%f", C);}
					else 
					if(a==3){
							printf ("Please introduce the gallons you want to convert to liters: \n");
							fscanf(stdin, "%f", &d);
							L= d*3.785;
							printf ("The convertion to liters is:%f", L);}
						else 
						if (a==4){
									printf ("Please introduce the pounds you want to convert to kilograms: \n");
									fscanf(stdin, "%f", &e);
									Kg= e/2.205;
									printf ("The convertion to kilograms is:%f", Kg);}
							else 
											printf ("Why? :/");

	getch ();
	return 0;
}
