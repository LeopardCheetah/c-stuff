#include <stdio.h>

// some stuff on arrays
// count digits
const char strone[] = "Hello";
char strtwo[] = "World!"; 

const int zero = 0;

int main() {
	printf("%s %s\n", strone, strtwo);
	// break process
	return 0;
	
	
	int c, i, nwhite, nother;
	int ndigit[10];
		
	nwhite = nother = 0;
	
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;
	
	// filler array
	
	
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c-'0']; //finds array value in a smart way and increments it
		else
			++nother;
	}
	
	printf("digits =");
	for (i = 0; i < 10; ++i) {
		printf(" %d", ndigit[i]);
	}
	printf("\nother: %d", nother);
}