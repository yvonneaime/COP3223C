// Yvonne Aime 
// COP3223
// October 05, 2023
// Example 3 - Array Search

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

int main() {
       
    srand(time(0));
    int index, numbers[SIZE];
    // Fill the array with random numbers from 0 - 99.
    for (index = 0; index < SIZE; index++) {
        numbers[index] = rand()%100;

    }

    // Print out orginal array values.
    printf("Orginal array values: ");
    for (index=0; index<SIZE; index++) { 
        printf("%d ", numbers[index]);
        printf("\n");
    }

    // Find the number the user wants to search for.
    int value;
    printf("What is the number you want to search for?\n");
    scanf("%d", &value);

    /* Look through array for the #, if you find it, change found to 1. */
    int found = 0;
    for(index=0; index<SIZE; index++) {
        if(numbers[index] == value) {
            found = 1;
        }
    }

    // Print out the result.
    if (found == 1) {
        printf("%d was in the array.\n", value);
    }
    else 
        printf("%d was not in the array.\n", value);

    return 0;
}