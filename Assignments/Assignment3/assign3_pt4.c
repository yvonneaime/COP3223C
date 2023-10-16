// Yvonne Aime
// COP3223
// October 10, 2023

// Lecture Assignment 3 - Part 4
/*
In a main function 
Fill up the array with random numbers that represent the rolls of a die. That means values from 1 to 6.
Use an array of 6 elements to keep track of the counts, as opposed to 6 individual variables.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_LENGTH 1000
#define DICE 6

int main() {
    srand(time(0));
    
    int i, long_array[ARRAY_LENGTH], track_array[DICE] = {0};

    // Declare an array of 1000 ints.
    for (i = 0; i < ARRAY_LENGTH; i++) {
        int new_number = (rand() % 6) + 1;
        long_array[i] = new_number;
        track_array[new_number - 1]++;
    }

    for (i = 0; i < DICE; i++) {
        // A loop will count how many times each of the values appears in the array of 1000 die rolls.
        printf("\n✩°｡⋆ Dice element number: %d \n✧ Count: %d\n\n",i + 1, track_array[i]);
    }

    return 0;
}