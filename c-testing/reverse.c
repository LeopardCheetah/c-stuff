// reverse a string

#include <stdio.h> 

int reverse(char in[], char out[]);

int main() {
	printf("hello, world!\n");
}

int reverse(char in[], char out[]) {
	// void is better since i cant pass the fun stuff yet
	
	int length;
	char nextchar;
	for (length = 0; nextchar != '\0'; length++) {
		nextchar = in[length];
		length++;
	}
	
	// length is the length
	int count;
	for (count = 0; count < length; count++){
		out[count] = in[length-count-1]; // this could do an error if u rewrite it enough
	}
	return 0;
}