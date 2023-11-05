// Yvonne Aime 
// COP3223
// October 31, 2023

// String example 1

#include <stdio.h>
#include <string.h>

int main() {
    char first[30], last[30];
    char wholename[60];

    printf("Enter your first name.\n");
    scanf("%s", first);
    printf("Enter your last name.\n");
    scanf("%s", last);

    // Prints out the one that comes first alphabetically.
    if strcmp(first, last) < 0
        printf("Your first name comes first alphabetically.");
    else 
            if strcmp(first, last) == 0
            printf("Interesting!");
    else 



}