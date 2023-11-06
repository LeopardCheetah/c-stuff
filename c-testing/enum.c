// enums?

#include <stdio.h>

enum boolean {NO, YES}; // no 0, yes 1

enum angle {ACUTE, RIGHT, OBTUSE}; 


int main() {
	enum boolean flag;
	flag = NO;
	
	
	printf("%d\n", flag); // 0
	printf("%d\n", OBTUSE); // 2
	
	return 0;
}