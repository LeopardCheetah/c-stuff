// for functions
// power functions

# include <stdio.h>

// function prototype (has to be consistent with the other one)
int power(int m, int n);

// main function
main() {
	printf("%d %d %d", power(2, 3), power(3, 2), power(5, 5));
}


int power(int base, int n) {
	int prod, p;
	prod = 1;
	for (p = 0; p < n; p++)
		prod = prod*base;
	
	return prod;
}


// func notes:
// if u try to modify a variable outside of a func in a func (w/o global) - gotta pass a pointer (parametetr is also a pointer)