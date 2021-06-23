#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  int n, count= 1;   
  float x, sum= 0;   
  printf("How many resistors do you have? \n");  
  scanf ("%d",&n);   
  while (count <= n)   
     {   
      printf ("Enter the %d resistence \n",count);   
      scanf("%f", &x);   
      sum += (1/x);   
      ++count;   
     }   
	 sum= 1/sum;  
      printf("The total resistance is %f \n", sum);   

	
	getch();
	return 0;
}
