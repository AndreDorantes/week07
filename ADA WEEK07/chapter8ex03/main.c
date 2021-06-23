#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  int n, count= 1;   
  float x, avrg, sum= 0;   
  printf("How many numbers do you have? \n");  
  scanf ("%d",&n);   
  while (count <= n)   
     {   
      printf ("Enter the %d number \n",count);   
      scanf("%f", &x);   
      sum += x;   
      ++count;   
     }   
      avrg = sum/n;   
      printf("The average is %f \n", avrg);   

	
	getch();
	return 0;
}
