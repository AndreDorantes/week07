#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int year;
	printf("Insert the year: ");
	fscanf(stdin, "%d",&year);
	if(year % 4 == 0 && year% 100 != 0 || year % 400 == 0 )
        printf( "\n   Is a leap year" );
    else
        printf( "\n Is not a leap year" );
getch();
	return 0;
}
