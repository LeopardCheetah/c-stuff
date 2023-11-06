
// trying to make section 1.9 w/o reading it (using the framework)

/*
while (there's another line)
	if (it's longer than the previous line)
		save it
		save its length
print longest line
*/


// program works :)
// so the actual book used functions bruh
#include <stdio.h>

main() {
	int max, c, index;
	max = -1;
	c = 0;
	
	// use a char array to store the actual "string"
	
	char longstr[100];
	char temparr[100];
	// i think this works
	
	// wait how do i read a file
	char ch;
	ch = getchar();
	while (ch != '/') {
		// shh
		while (ch != '\n') {
			temparr[c] = ch;
			c++;
			ch = getchar();
		}
		
		if (c > max) {
			// change arrs
			for (index = 0; index < c; index++) {
				longstr[index] = temparr[index];
			}
			max = c;
		}
		// clear temparr => set them to null?
		for (index = 0; index < c; index++) {
			temparr[index] = '\0'; // null
		}
		c = 0;
		ch = getchar();
	}
	
	// print longest line
	printf("number of chars in longest line: %d\n", max); 
	printf("longest line:\n");
	for (index = 0; index < max; index++){
		printf("%c", longstr[index]);
	}
}