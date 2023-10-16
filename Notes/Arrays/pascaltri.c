// Yvonne Aime
// October 10, 2023
// COP3223C

// Example to illustrate a use of 2-D arrays that prints out the first
// ten rows of Pascal's Triangle.

#include <stdio.h>

int main()
{
    int pascaltri[11][11];
    int i, j;
    // Initialize the beginning and end of each row.
    for (i = 0; i < 11; i++)
    {
        pascaltri[i][0] = 1;
        pascaltri[i][i] = 1;
    }
    // Fills in triangle, using the pascal triangle identity.
    for (i = 2; i < 11; i++)
        for (j = 1; j < i; j++)
            pascaltri[i][j] = pascaltri[i - 1][j - 1] + pascaltri[i - 1][j];
    // Prints out chart.
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%6d ", pascaltri[i][j]);
        printf("\n");
    }
    return 0;
}
