#include <stdio.h>

// #include <ctype.h>

// note that these char functions return ints (cast them back if u want)
int char_to_letter(char);
int lower(char);
int htoi(char); // hexadecimal to integer
int test(char[]);
// void squeeze(char[], char[], int, int);

int main() {
    char arr[5], barr[5];
    arr[0] = 'c';
    arr[1] = 'a';
    arr[2] = 't';
    arr[3] = 't';
    arr[4] = 'o';

    barr[0] = 'd';
    barr[1] = 'o';
    barr[2] = 'g';
    barr[3] = 'g';
    barr[4] = 'o';

    // squeeze(arr[5], barr[5], 5, 5);
    
    printf("\n%s\n%s\n", arr, barr);
    return 0;
}


int char_to_letter(char ch){
    return ((char)lower(ch)) + 1 - 'a';
}

int lower(char c){
    if ((c > 'Z') || (c < 'A')){
        return c;
    }
    return c + 'a' - 'A';
}

// exercise 2-3
int htoi(char c){
    if ((int)c < 48)
        return -1;
    if ((int)c < 58)
        return (int)c - 48; // numbers
    
    c = lower(c);

    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f
    return (int)c - 87;
}


int test(char c[]){
    return 1;
}

/*
// i love crashing my computer
void squeeze(char a[], char b[], int alen, int blen){
    int ap, bp, apt, f;
    ap = bp = apt = 0;

    for (ap; ap < alen; ap++){
        // check if a[ap] is in b[bp]
        f = 1;
        for (bp = 0; bp < blen; bp++){
            if (a[ap] == b[bp]){
                f--;
                break;
            }
        }
        
        if (!f){
            continue;
        }
        a[apt] = a[ap];
        apt++;
    }
    
    return;
}
*/