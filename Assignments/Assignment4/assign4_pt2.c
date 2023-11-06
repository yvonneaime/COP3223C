// Yvonne Aime 
// COP3223
// October 19, 2023
// Lecture Assignment 4 - Part B

/*  Write a function that takes one double parameter, and returns a char. 
    The parameter represents a grade, and the char represents the corresponding letter grade. 

    If you pass in 90, the char returned will be ‘A’. If you pass
    in 58.67, the char returned will be an ‘F’ etc. 
    Use the grading scheme on the syllabus for this course    */

#include <stdio.h>

char grade_calc(double grade);

int main() {
    double yourGrade;
    char letterGrade = grade_calc(yourGrade);

    printf("\n\nPlease enter your grade. \n");
    scanf("%lf",&yourGrade);


    printf("This is your letter grade:%c",letterGrade);
    return 0;
}

char grade_calc(double grade) {    
    char letterGrade;

    if (grade >= 90.00 || grade <= 100.00)
        letterGrade = 'A';
    else if (grade >= 80.00 || grade <= 89.99)
        letterGrade = 'B';
    else if (grade >= 70.00 || grade <= 79.99)
        letterGrade = 'C';
    else if (grade >= 60.00 || grade <= 69.99)
        letterGrade = 'D';
    else if  (grade >= 50.00 || grade <= 59.99)
        letterGrade = 'F';
    else 
        printf("Outside of Range - Try Again.");

    return letterGrade;
    
}

