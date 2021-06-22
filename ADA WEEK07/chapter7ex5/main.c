#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	/* Variables you will use in the program*/
    int num=0;
    int div=0;
    int prim=0; // prime = 0 no prime = 1
    /* Ask an intergral number up to -1 */
    do
    {
        printf("Number: \n");
        scanf(" %d",&num);
       prim=0;
div=2;
            while(div<num  && prim!=1)
            {
                if(num%div==0) prim=1;
                div++;
            }
            /* If the prime is 0 then the number is prime */
            if (prim==0)
            {
                printf("The number %d is prime \n",num);
            }
            else
            {
                printf("The number %d is not prime \n",num);
            }
        }
     while(num!=-1);
     
	getch();
	return 0;
}
