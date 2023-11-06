// pg 100ish
// turns out alloc aint defined

#include <stdio.h>


int main(){
    char *p;

    p = alloc(30);

    printf("%s", p);


    return 0;
}


// page 101 alloc function
// unsupported now (see malloc and free instead of alloc and afree)
/* 
#define ALLOCSIZE 1000 // space
static char allocbuf[ALLOCSIZE]; // static hasn't been covered yet
static char *allocp = allocbuf; // next free position

char *alloc(int n){
    if (allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n;
    } else {
        return 0;
    }
}

*/