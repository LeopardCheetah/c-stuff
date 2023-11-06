#include <stdio.h>

int power(int base, int times); 

int main() {
	
	unsigned int a;
	a = 0;
	a--;
	// a = 2^32 - 1

	int b;
	b = power(2, 31);
	// since b is from 2^31 - 1 => -2^31 2^31 overflows and thus = -2^31
	
	unsigned short c;
	c = 0;
	c--;
	// 65535
	
	short d;
	d = power(2, 15);
	// we get -2^15
	
	unsigned long e;
	e = 0;
	e--;
	// 2^32 - 1
	
	printf("%u %d\n%u %d\n%u\n", a, b, c, d, e);
	return 0;
}

int power(int base, int times) {
	int ans, count;
	ans = 1;
	for (count = 0; count < times; count++)
		ans = ans*base;
	
	return ans;
}