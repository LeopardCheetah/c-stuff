// pg 104
#include <stdio.h>

// execercise 5-3
int strend(char *a, char *b);
int len(char *a);

int main(){
    
    char *str_one = "abcdefghijklmnop";
    char *str_two = "mnop";

    printf("%d\n", strend(str_one, str_two));

    return 0;
}




int strend(char *a, char *b){
    // figure out length of string a and string b
    // check if back chars are equal

    char *p = a + len(a) - len(b);
    int flag = 1;

    int l = len(b);
    
    while (l--){
        if ((*p++ != *b++) && (p != '\0')){
            printf("%s %s\n", --p, --b);
            flag = 0;
        }
    }
    
    // int i = 10;
    // while (i){
    //     i--;
    //     printf("%s, %s\n", p++, b++);
    // }
    

    return flag;
}

int len(char *a){
    char *p = a;

    while (*p)
        p++;
    
    return p - a;
}