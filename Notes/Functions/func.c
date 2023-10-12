// Yvonne Aime 
// COP3223
// October 12, 2023

// 1st function program.

#include <stdio.h>

// Return type 
int Comp_Grade(char grade);

// Parameter - what is being passed is a character
char readChar();

int main() {
    // Setup all of the variables.
    int total_points = 0, total_hours = 0, c_hours;
    char ans = 'Y';
    char my_grade;

    // Loop while user has more grades to enter. We assume they have at least one grade.
    while(ans == 'Y' || ans == 'y') {

        // Get the grade and number of hours of the current class.
        printf("Enter yout letter grade. \n");
        my_grade = readChar();
        printf("Enter the number of credit hours.\n");
        scanf("%d", &c_hours);

        // Update the number of total points and total hours.
        total_points += c_hours * Comp_Grade(my_grade);
        total_hours += c_hours + total_hours;

        // See if there is another grade to get.
        printf("Do you have another grade to enter?\n");
        ans = readChar();


    }
    // Print out GPA.
    printf("Your GPA is %.2lf\n", (double)total_points/total_hours);
    
    return 0;
}