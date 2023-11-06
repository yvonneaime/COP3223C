// Yvonne Aime 
// COP3223
// November 5, 2023
// Lecture Assignment 4 - Part C


#include <stdio.h>

// Tells the compiler that there is a function named 'numCalc()'.   
int numCalc(int a, int b, int c);

int main() {
    // Variables used to store the user input.
    int num1, num2, num3;

    // Prompts user to enter three numbers. 
    printf("\n\n✩ Please enter three integers ✩ \n\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // 'largestNum' calls numCalc() with three integer values as arguments.
    int largestNum =  numCalc(num1, num2, num3);

    // Prints out largest number of the three integers. 
    printf("\n\n\t𓍯𓂃  This is the largest integer: %d \n\n", largestNum);

    return 0;
}


// Function numCalc() takes in 3 int arguments and returns the largest of the 3. 
int numCalc(int a, int b, int c) {

    // Declaring and initializing 'max' to int a.
    int max = a;
    
    if (a < b) {
        max = b; // If 'b' is greater than 'a' max is updated. 
    }

    if (b < c) {
        max = c; // If 'c' is greater than 'b' max is updated. 
    }

    return max;
}