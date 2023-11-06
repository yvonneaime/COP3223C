// Yvonne Aime 
// COP3223
// October 19, 2023
// Lecture Assignment 4 - Part B


#include <stdio.h>

char grade_calc(double grade);

int main() {
    // Declaring and initializing yourGrade -- (user input).
    double yourGrade = 0.00;

    // Prompts the user to enter a grade in a specific format.
    printf("\n\nPlease enter your grade (in this format: XX.XX) .𖥔 ݁₊  \n\n");
    scanf("%lf",&yourGrade);

    char letterGrade = grade_calc(yourGrade);
    printf("\n\n｡･*˚✧｡ This is your letter grade: %c \n\n",letterGrade);
    return 0;
}


char grade_calc(double grade) {    
    char letterGrade;

/*  If you pass in 90, the char returned will be ‘A’. If you pass in
    58.67, the char returned will be an ‘F’ etc.    
 */
    if (grade >= 90.00 && grade <= 100.00)
        letterGrade = 'A';
    else if (grade >= 80.00 && grade <= 89.99)
        letterGrade = 'B';
    else if (grade >= 70.00 && grade <= 79.99)
        letterGrade = 'C';
    else if (grade >= 60.00 && grade <= 69.99)
        letterGrade = 'D';
    else if (grade >= 50.00 && grade <= 59.99)
        letterGrade = 'F';
    else 
        // Handles input outside of range. Returns 'X' to the user. 
        letterGrade = 'X'; 

    return letterGrade;
}

