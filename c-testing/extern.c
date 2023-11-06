// global vars?? 

#include <stdio.h>

int counter;

int main(void) {
	// this line doesn't need to be here
	extern int counter;
	
	counter = 1;
	
	printf("counter: %d\n", counter); 
	return 0;
}