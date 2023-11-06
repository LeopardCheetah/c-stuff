#include <stdio.h>

main() {
	int fahr;
	int k; // must define the loop vars ahead of time
	fahr = 3;
	
	for (k = 0; k < 10; k++) {
		fahr = fahr*2;
		printf("%d\n", fahr);
	}
	// 1+ line for/while loops must use curly braces
}