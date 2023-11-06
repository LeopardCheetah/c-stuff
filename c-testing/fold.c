// exercise 1-22

#include <stdio.h>

#define ROWLENGTH 15
#define BIGNUM 1000

int main() {
	char c;
	char output[BIGNUM];
	int counter, arrpoint;
	
	counter = 0;
	arrpoint = 0;
	
	while ((c = getchar()) != '\t') {
		
		if (counter < ROWLENGTH && c == '\n') {
			counter = 0;
			output[arrpoint] = c;
			arrpoint++;
			continue; 
		} else if (counter < ROWLENGTH) {
			counter++;
			output[arrpoint] = c;
			arrpoint++;
			continue;
		}
		
		if (c != '\n' && c != ' ') {
			output[arrpoint] = c;
			arrpoint++;
			counter++;
			continue;
		}
		counter = 0;
		output[arrpoint] = '\n'; 
		arrpoint++;
	}
	
	// print chars
	for (counter = 0; counter < arrpoint; counter++) {
		printf("%c", output[counter]);
	}
	
	printf("\nexec end");
	return 0;
}