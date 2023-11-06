#include <stdio.h>

// definitions!! - kind of like constants
#define Apples 4
#define Pears 2136

/*
syntax:
#define <const name> <const value>
*/

main() {
	int sum; 
	sum = Apples + Pears;
	
	printf("%d", sum);
}
 // should print 2140