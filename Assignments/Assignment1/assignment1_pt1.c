// Yvonne Aime
// PART 1 - Lecture Assignment 1
// COP3223
// September 04, 2023

#include <stdio.h>

int main() {
    // Asks the user 
    printf("Please enter five random numbers.\n");

    // Declaration of 5 long integers 
    long int var1, var2, var3, var4, var5;
    scanf("%ld", &var1);
    scanf("%ld", &var2); 
    scanf("%ld", &var3); 
    scanf("%ld", &var4); 
    scanf("%ld", &var5); 
    
    // Prints integers entered by the user, along with the total, and average of the numbers. 
    printf("You entered %ld, %ld, %ld, %ld, and %ld.  \n", var1,var2, var3, var4, var5);
    // Total of all numbers entered.
    long int total = (var1+var2+var3+var4+var5);
    printf("The sum of the numbers you entered is: %ld.\n", total);
    
    //  Average of all numbers entered.
    float average = total/5;
    printf("The average is %2.lf.\n", average);
    
    return 0;
}

