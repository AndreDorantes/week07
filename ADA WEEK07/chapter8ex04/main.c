#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int n, i;
    printf("Wich multiplication table do you want?: ");
    fscanf(stdin, "%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n*i);
    }
	
	getch ();
	return 0;
}
