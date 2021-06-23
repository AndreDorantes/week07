#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char a;
	printf ("Insert the letter:" );
	scanf ("%c", &a);
	if (a== 'a' || a== 'e' || a== 'i' || a== 'o' || a== 'u')
			printf ("Vowel");
	else 
			printf ("Consonant");
	
	getch ();
	return 0;
}
