// Yvonne Aime 
// COP3223
// October 19, 2023
// Lecture Assignment 4 - Part A

/* A.  It also returns a double. Call this one ‘average.’
 Return a double that is the average of the values in the array. 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Constant that represents the size of the array 
#define ARRAY_LENGTH 7

double average(int newArray[], int size);

int main() {
    // Declaring an array of integers
    int newArray[ARRAY_LENGTH] = {78, 90, 56, 99, 88, 68, 92};

    // Prints out array.
    printf("This is the current array:\n{78, 90, 56, 99, 88, 68, 92}\n");

    double avg = average(newArray, ARRAY_LENGTH);

    // Prints out average of the array
    printf("\nThis is the average of that array: %.2lf\n", avg);

    return 0;
 }


double average(int newArray[], int size) {
    int i;
    double sum = 0.00;
    double mean;

    // Iterates through array and adds each number. 
    for (i = 0; i < size; i++) {
        sum += newArray[i];
    }
    // Calculates average of the array, by taking the sum of the array and dividing by its length.
    mean = sum / size;
    return mean;
}