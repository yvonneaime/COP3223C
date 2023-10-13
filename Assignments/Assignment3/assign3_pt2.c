// Yvonne Aime
// COP3223
// October 10, 2023
// Lecture Assignment 3 - Part 2

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 10

int main() {
    int i, random_numbers[ARRAY_LENGTH];

    srand(time(0));

    // Fill the array with random numbers from 0 - 99. 
    for (i = 0; i < ARRAY_LENGTH; i++) {
        random_numbers[i] = rand()%100;

    }
    printf("All elements of the array, includes: ");
    for (i = 0; i < ARRAY_LENGTH; i++) { 
        printf("\n%d", random_numbers[i]);
        printf("\n");
    }

    return 0;
}