#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	float numbers[5];
	int j, p=0, n=0;
	printf("\nInput the first number: "); 
    fscanf(stdin, "%f", &numbers[0]);
    printf("\nInput the second number: "); 
    fscanf(stdin, "%f", &numbers[1]);
    printf("\nInput the third number: "); 
    fscanf(stdin, "%f", &numbers[2]);
	printf("\nInput the fourth number: "); 
    fscanf(stdin, "%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    fscanf(stdin, "%f", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			p++;
		}
		else if(numbers[j] < 0)
		{
			n++;
		}
	}
	printf("\nNumber of positive numbers: %d", p);
	printf("\nNumber of negative numbers: %d", n);
	printf("\n");
	
	getch();
	return 0;
}
