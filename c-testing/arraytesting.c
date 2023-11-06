#include <stdio.h>

// try to print the "null" values in an arr
int main() {
	int i;
	int arr[10];
	
	for (i = 0; i < 10; ++i)
		printf("%s", arr);
	
	return 0;
}