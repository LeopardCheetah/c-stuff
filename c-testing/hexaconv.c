#include <stdio.h>


int htoi(char c);

int main(){
	printf("%d %d %d %d %d\n", htoi('1'), htoi('8'), htoi('a'), htoi('f'), htoi('0'));
	return 0;
}

int htoi(char c){
	// check if the char is a number or not
	int val;
	if (c >= 'a' && c <= 'f'){
		// break statements?
		// a is 10
		val = (c - 'a') + 10;
	} else {
		val = (c - '0');
	}
	return val;
}
