#include <stdio.h>

int bsearch(int x, int arr[], int l);
// page 58 - k&r, i use this as an exercise for myself

int main(){
    int collection[10];

    // psuedorandom?
    
    printf("Array:\n");
    for (int idx = 0; idx < 10; idx++){
        // collection[idx] = (1237*idx + 965) % 10; - too fancy, also not even sorted
        collection[idx] = idx;
        printf("%d ", collection[idx]);
    }

    printf("\n\nSearching for 4:\n");

    // pass array by name
    // why did i not think of this
    printf("4 found at index %d in arr\n", bsearch(4, collection, 10));
    return 0;
}


int bsearch(int x, int arr[], int l){
    // x - item to look for
    // arr[] - the sorted array
    // l - length of array

    int low, mid, high;

    low = 0;
    high = l - 1; // good catch

    while (low != high){

        mid = (low + high)/2; // rounds down

        if (x == arr[mid]){
            return mid;
        }

        if (x > arr[mid]){
            // x is above - move low pointer
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // check if the value was really found
    if (arr[low] == x){
        return low;
    }

    return -1;
}