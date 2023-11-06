#include <stdio.h>

#define COOL_A '\101' // letter 'A' (ascii 65, base 8 101)
#define HEXA_A '\x41' // hexadecimal 65

int main() {
	printf("%c\t%cB\n", COOL_A, HEXA_A);
	printf("string one, " "string two" "\n");
	return 0;
}