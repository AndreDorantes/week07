#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int number, i=0, j, a;
	char * arr[3000];
	printf("Insert the number: ");
	fscanf (stdin,"%i",&number);
	while(number){
	a= number%10;
	number=number/10;	
	switch(a){
     case 0: arr[i++]="zero ";
			break;
			case 1: arr[i++]="One ";
			break;
			case 2: arr[i++]="Two ";
			break;
			case 3: arr[i++]="Three ";
			break;
			case 4: arr[i++]="Four ";
			break;
			case 5: arr[i++]="Five ";
			break;
			case 6: arr[i++]="Six ";
			break;
			case 7: arr[i++]="Seven ";
			break;
			case 8: arr[i++]="Eight ";
			break;
			case 9: arr[i++]="Nine ";
			break;
    	}
    }
	for(j=i-1; j>=0; j--){
		printf("%s",arr[j]);
	}
  
	getch();
	return 0;
}
