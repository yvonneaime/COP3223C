// Yvonne Aime
// COP3223
// October 3, 2023

// Lecture Assignment 3 - Part 1

// Write a main function that declares an array of 10 int’s. 
/* Assign each element in the array a value between 1 and 100
using 10 assignment statements – just make up the values */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 10

int main() {
    int i, new_array[ARRAY_LENGTH];
    new_array[0] = 2;
    new_array[1] = 24;
    new_array[2] = 38;
    new_array[3] = 44;
    new_array[4] = 66;
    new_array[5] = 68;
    new_array[6] = 77;
    new_array[7] = 86; 
    new_array[8] = 88; 
    new_array[9] = 98; 

    printf("\n⋆⭒˚｡⋆ All elements of the array include: ⋆⭒˚｡⋆ \n");
    for (i = 0; i < ARRAY_LENGTH; i++)  {
        printf("%d\n", new_array[i]);
    }

    return 0;
}