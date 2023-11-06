// so this is a new c document made from w cl
// let's see if this runs :)

#include <stdio.h>

main() {
    int a, b;
    a = 3;
    b = 4;

    float c;
    c = b;
    // printf("%d %f %d %d\n", a+b, a/b, a%b, a^b);
    // will give undefined and weird behavior because of the float reading of the interger 0 (a/b line)

    printf("%s", a);
    // should give a seg fault
} 