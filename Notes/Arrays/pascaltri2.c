// Yvonne Aime
// October 10, 2023
// COP3223C

// Example to illustrate a use of 2-D arrays that prints out the first
// ten rows of Pascal's Triangle.
// This printout looks more like the traditional triangle.

#include <stdio.h>

#define ROWS 10

int main()
{
    int pascaltri[ROWS + 1][ROWS + 1];
    int i, j, numspaces;
    // Initialize the beginning and end of each row.
    for (i = 0; i <= ROWS; i++)
    {
        pascaltri[i][0] = 1;
        pascaltri[i][i] = 1;
    }
    // Fills in triangle, using the pascal triangle identity.
    for (i = 2; i <= ROWS; i++)
        for (j = 1; j < i; j++)
            pascaltri[i][j] = pascaltri[i - 1][j - 1] + pascaltri[i - 1][j];
    // Prints out chart.
    numspaces = 2 * ROWS;
    for (i = 0; i < 11; i++)
    {
        // Prints out leading spaces based on which row we're on.
        for (j = 0; j < numspaces; j++)
            printf(" ");
        // Prints out all the numbers for this row.
        for (j = 0; j <= i; j++)
            printf("%4d ", pascaltri[i][j]);
        printf("\n");
        // Adjusts number of spaces.
        numspaces = numspaces - 2;
    }
    return 0;
}
