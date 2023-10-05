// Yvonne Aime 
// COP3223
// October 05, 2023
/* Second Example of an array - to generate random #'s, stores them into an array 
 and then prints them out in reverese order */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Constant value/variable 
#define SIZE 10

int main() { 
    
    srand(time(0));
    int index, numbers[SIZE], temp;

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

    for (index = 0; index < SIZE/2; index++) {
        // temp -  variable used for swapping.
        temp = numbers[index];
        numbers[index] = numbers[SIZE - 1 - index];
        numbers[SIZE - 1 - index] = temp;
    }

    // Print out values from the array in reverse.
    printf("Reverse array values: ");
    for (index = 0; index < SIZE; index++) {
        printf("%d", numbers[index]);
        printf("\n");
    }

    return 0;
}