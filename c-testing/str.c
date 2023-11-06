// string library shenanigans
// 3/21/23

#include <stdio.h>

void squeeze(char s1[], char s2[]);
char any(char s1[], char s2[]);

int main(){
    char arr[] = "hello";
    char s2[] = "l";

    squeeze(arr, s2); // void command so it just does its thing

    printf("%s\n", arr);
    return 0;
}


void squeeze(char s1[], char s2[]){
    // any char in s1 that is a char of s2 gets removed
    // use "pointers"

    int left, right;
    char c;
    left = 0;
    right = 0;

    int p;
    p = 0; // loop thru s2

    while (s1[right] != '\0'){
        // is c in p
        int flag;
        flag = 0;

        c = s1[right];
        // ig integer stuff works but stuff gets iffy once its in char format

        while (s2[p] != '\0'){
            if (s2[p] == c){
                flag = 1;
                break;
            }
            p++;
        }
        p = 0;
        
        if (flag == 1){
            // uh oh 
            s1[right] = '\0'; // a test
            right++;
            continue;
        }
        
        s1[left++] = s1[right++];
    }
}


// todo
char any(char s1[], char s2[]){
    // return first location when char in s1 exists in s2
    return 'a';
}