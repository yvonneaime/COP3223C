// Yvonne Aime
// COP3223
// November 08, 2023
// Structure notes 


#include <stdio.h>

struct block {
    int number;
    char letter;
    char color[15];
};

int main() {
    struct block first;
    printf("Enter the number on the first block.\n");
    scanf("%d", &first.number);
    printf("Enter the letter on the first block.\n");
    scanf("%c", &first.letter);
    printf("Enter the color of the first block.\n");
    scanf("%s", &first.color);
    printf("Block info: %d %c %s\n", first.number, first.letter,
    first.color);
}


/* Although we only have simple components for this particular
record, there is no reason why one of the components of a
record couldn't be another record, or an array, for example.
All the syntax would work accordingly. Keep in mind that
every expression such as first.number acts EXACTLY like an
integer variable.   */
