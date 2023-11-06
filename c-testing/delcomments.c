// delete comments from inputted c file
// uh this'll be hard
// exercise 1-23

#include <stdio.h>

int main() {
	char program[10000];
	// let's hope the program doesn't have more than 1000 chars
	int flag, point, test; // test is a filler
	char c, lastchar;
	
	flag = 0;
	point = 1;
	program[0] = '\0'; // just so my program doesn't break
	
	while ((c = getchar()) != EOF) {
		// so what's the eof char again?
		
		/* c1 */
		test = 0;
		
		/* test comment
		but its number two
		*/
		
		if ((flag == 1) && (c != '\n'))
			continue;
		
		if ((flag == 1) && (c == '\n')){
			flag = 0;
			continue;
		}
		
		if ((flag == 2) && (c != '/') && (lastchar != '*')){
			lastchar = c;
			continue;
		}
		
		if ((flag == 2) && (c == '/') && (lastchar == '*')) {
			lastchar = ' ';
			flag = 0;
			continue;
		}
		
		if ((c == '/') && (program[point-1] == '/')) {
			flag = 1;
			point--;
			program[point] == ' ';
			continue;
		}
		
		if ((c == '*') && (program[point-1] == '/')) {
			lastchar = ' ';
			flag = 2;
			point--;
			program[point] == ' ';
			point--;
			program[point] == ' ';
			continue;
		}
		
		program[point] = c;
		point++;
	}
	
	printf("\nrevised program:\n");
	for (flag = 1; flag < point; flag++)
		printf("%c", program[flag]);
	
	printf("\nexec end");
	return 0;
}