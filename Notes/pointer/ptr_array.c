// Yvonne Aime 
// COP3223
// October 12, 2023

// To access an array with elements using a pointer.

#include <stdio.h>

void main() {
    // Declare an array.
    int val[3] = {5, 15, 15};

    // Declare pointer variable
    int * ptr;

    // Assign address of  val[0] to ptr.
    // We can use ptr = val[0];
    ptr = val;
    printf("Elements of the array are: ");
    printf("%d,%d,%d", ptr[0],ptr[1],ptr[2]);
    return;

}

// Driver code 
int main() {
    ptr();
    return 0;
}