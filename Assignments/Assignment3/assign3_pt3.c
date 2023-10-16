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
        // 100 + 1 - so that 100 is included within the array. 
        random_array[i] = rand() % 100 + 1;
        printf("%d\n",random_array[i]);
    }

    // Calculates the average of the values in the array. 
    // sum - holds the sum of all the values in the array
   double sum = 0, average;
   for (i = 0; i < ARRAY_LENGTH; i++) {
        sum += random_array[i];
   }
   // The average = the sum divided by the number of values in the array
   average = sum / ARRAY_LENGTH;

   // Outputs the average of the numbers in the array. 
   printf("\nThis is the average of all the values in the array: %.2lf\n\n", average);

   return 0;
}