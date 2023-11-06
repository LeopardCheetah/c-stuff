// io in c :D 

/*
get char to get the next input char (may be "\n" char)
putchar(<c>) turns int <c> --> charachter --> print

*/

// turns the input into output
#include <stdio.h>

main() {
	int c; // notice that it is stored in type int
	
	// printf("%d", EOF); --> -1
	
	c = getchar();
	// while ((c = getchar()) != EOF) {}
	while (c != EOF){
		// EOF = end of file, exit using Ctrl + Z
		
		putchar(c);
		c = getchar();
	}
}

