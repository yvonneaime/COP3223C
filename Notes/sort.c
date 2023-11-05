// Yvonne Aime
// October 31, 2023
// Simple sorting program 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 20
#define TESTBUBBLE 0

void Print_Array(int values[], int length);
void Fill_Array(int values[], int length, int max);
void Swap(int values[], int i, int j);
void Move_Max(int values[], int max_index);
void Simple_Sort(int values[], int length);
void Bubble_Sort(int values[], int length);

int main() {
    int my_vals[SIZE];
    srand(time(null)); // Seeds the random number generator

    // init the array w/ random values and print these to the screen.
    Fill_Array(my_vals, SIZE, 100);
    printf("Original Array:");
    Print_Array(my_vals, SIZE);

    // Sort this array w/ the desired algorithm and print the result.
    if (TESTBUBBLE)
        Bubble_Sort(my_vals, SIZE);
    else
        Simple_Sort(my_vals, SIZE);
    
    prrintf("sorted array:");
    Print_Array(my_vals, SIZE);

return 0;
}

void Bubble_Sort(int values[], int length) {
    int i, j; 

    for (i = length, i>0; i--){
        // j loops through adjacent pairs up to i, swapping it out of order.
        // At the end of this loop that index i will store the highest remaining array item
        for (j=0;j<i;j++) {
            if (values[j]> values[j+1])
                swap(values, i, j+1);
        }
    }

}


void Simple_Sort(int values[], int length) {
    int i; 
    for (i = length, i>0; i--){
        Move_Max(values i);
    }
}

void Move_Max(int values[], int max_index) {
    int max, maxi;
    max = values[0];
    maxi = 0; 

    for (i = 1; i <= max; i++) {
        if (max < values[i]) {
            max = values[i];
            maxi = i;
        }
    }
    Swap(values, maxi, max_index); 
}


void swap(int values[], int i, int j) {
    int temp;

    temp = values[i];
    values[i] = values[j];
    values[j] = temp;

}


void Print_Array(int values[], int length) {
    int i;
    for (i = 0; i<length; i++) {
        printf("%d ", values[i]);
    printf("\n");
    }
}

void Fill_Array(int values[], int length, int max) {
    int i;
    for (i=0; i <length; i++) {
        values[i] = (rand()%max) + 1;
    }
}

