// Yvonne Aime
// COP3223
// October 10, 2023

// Lecture Assignment 3 - Part 2

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 100

int main() {
    int i;
    double decimal_num[ARRAY_LENGTH];

    srand(time(0));

    // Fill the array with random numbers from 0.50 and 50.0. 
    for (i = 0; i < ARRAY_LENGTH; i++) {
        decimal_num[i] = (double) (rand() % 100 + 1) / 2.0;
    }
    
    // Prints out the array.
    printf("\nAll elements of the array, includes:\n ");
    for (i = 0; i < ARRAY_LENGTH; i++) { 
        // Converts all elements to a double format.
        printf("\n%.2lf", decimal_num[i]);
        printf("\n");
    }

    return 0;
}