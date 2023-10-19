// Yvonne Aime
// COP3223
// October 10, 2023

// Lecture Assignment 3 - Part 2

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 100
#define COL_LENGTH 10

int main() {
    int i;
    double decimal_num[ARRAY_LENGTH];

    srand(time(0));

    // Fill the array with random numbers from 0.50 and 50.0. 
    for (i = 0; i < ARRAY_LENGTH; i++) {
        decimal_num[i] = (double) (rand() % 100 + 1) / 2.0;
    }
    
    // Prints out the array.
    printf("\n\t⋆⭒˚｡⋆ All elements of the array, include: ⋆⭒˚｡⋆ \n\n");
    for (i = 0; i <= ARRAY_LENGTH; i++) {
        if (i % COL_LENGTH == 0 && i != 0){
            printf("\n");
        }
        /* Converts all elements to a floating point - 
            at least 6 spaces wide & a precision of 2. */
        printf("%6.2lf", decimal_num[i]);
    }
    return 0;
}