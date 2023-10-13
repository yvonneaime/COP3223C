// Yvonne Aime 
// COP3223
// October 12, 2023

// 1st function program.

#include <stdio.h>

// Return type - at the top of program (if it wasnt returning a value you could write it at the bottom)
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
        printf("Enter your letter grade. \n");
        my_grade = readChar();
        printf("Enter the number of credit hours.\n");
        scanf("%d", &c_hours);

        // Update the number of total points and total hours.
        total_points += c_hours * Comp_Grade(my_grade);
        total_hours += c_hours;

        // See if there is another grade to get.
        printf("Do you have another grade to enter?\n");
        ans = readChar();


    }
    // Print out GPA.
    printf("Your GPA is %.2lf\n", (double)total_points/total_hours);
    
    return 0;
}

// Pre - condition: Grade must be a 'A', 'B', 'C', 'D', or 'F' (parameters)
// Post - condition: A corresponding integer from 0 to 4 based on the grade will be returned. (return)

int Comp_Grade(char grade) {
    // Return appropriate integer for each grade
    if (grade == 'A')
        return 4;
    else if (grade == 'B')
        return 3;
    else if (grade == 'C')
        return 2;
    else if (grade == 'D')
        return 1;

    // For all 'F' cases we will ignore and invalid cases.
    return 0;
}

// Pre - condition: none
// Post - condition: returns the 1st character read from the stream that is not a space, tab, or new line character.

char readChar() {
    char ans;
    scanf("%c", &ans);

    // Read another charaxter until you get a non-white space.
    while (ans == ' ' || ans == '\n' || ans == '\t')
        scanf("%c", &ans);
    
    return ans;


}