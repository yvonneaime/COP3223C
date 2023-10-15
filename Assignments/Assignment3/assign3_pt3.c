// Yvonne Aime
// COP3223
// October 10, 2023
// Lecture Assignment 3 - Part 3


#define ARRAY_LENGTH 100

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(0));
    int i, random_array[ARRAY_LENGTH];

    // Fill the array with random values between 1 and 100.
    for (i = 0; i < ARRAY_LENGTH; i++) {
        random_array[i] = rand() % 100;
        printf("%d\n",random_array[i]);
        printf("\n");
    }

    /*
    Calculate the average of the values in the array. Output the average.
    */



    return 0;
}