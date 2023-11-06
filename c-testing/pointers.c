// this code invokes UB for fun 


#include <stdio.h>

int main(){
    int a[5];

    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    a[3] = a[1] + a[2];
    a[4] = a[2] + a[3];
    a[5] = a[3] + a[4]; // does this fault

    int *pointer;
    pointer = &a[0];

    // pointer = &(pointer); // pointer now points to a[3] which dne???
    for (int i = 0; i < 10; i++){
        printf("%d\n", *(pointer + 6));
        printf("%d\n", (pointer + 6)); // should give me the memory index
    }
    

    return 0;
}
