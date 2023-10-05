// Yvonne Aime
// COP3223 
// September 13, 2023
// Lecture Assignment 2 - Part 3

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void numgenerator() {

    // Seeds the number generator
    srand(time(NULL));
    int random_num;
    random_num = rand();
    
    // Checks to see if the random number generated is even.
    if (random_num % 2 == 0)
        printf("\n%d is an even number.\n\n", random_num);
    // Checks to see if the random number generated is odd.
    else
        printf("\n%d is an odd number.\n\n", random_num);
        
    /* Checks if the generated random number is divisible by 3 
    (with no remainder). */
    if (random_num % 3 == 0)
        printf("This number: %d is divisible by 3.\n\n", random_num);
    // Checks if the generated random number is divisible by 10.
    if (random_num % 10 == 0)
        printf("This number: %d is divisible by 10.\n\n", random_num);

}

// Driver Code
int main() {
    // Calls the function. 
    numgenerator();
    return 0;
}
