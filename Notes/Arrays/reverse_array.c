// Yvonne Aime 
// COP3223
// October 05, 2023
// First Example of an array

#include <stdio.h>

int main() { 
    // Array holds [50] memory locations in an array
    int index, test_scores[50];

    // Read in scores into array
    printf("Please enter 5 test scores.\n");

    // index = 0 (intializes) index < 5 so user can enter more than 5 test scores. 
    for(index = 0; index < 5; index++) {

        scanf("%d", &test_scores[index]);

    }
    // Print them out by going through the array, but do it backwards.
    printf("Here are the scores in their reverse order: ");
    // index -- (post decrement)
    for (index = 4; index >= 0; index--) {
        printf("%d", test_scores[index]);

    }

    return 0;
}