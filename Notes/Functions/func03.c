// Yvonne Aime 
// COP3223
// October 19, 2023

// Part 2 - section 1-  Functions

#include <stdio.h>

int addNumbers(int a, int b); // formal parameters
// Function prototype or declaration
int main() {
    int n1, n2, sum;
    printf("Enter two numbers:");
    scanf("%d %d",n1, n2);

    sum = addNumbers(n1,n2); // Function call / invoking the function
    printf("sum = %d", sum);

    return 0;
}

int addNumbers(int a, int b)// pre condition
// User assigned function
 {
    int result;
    result = a + b;
    return result; // Return statement 
}