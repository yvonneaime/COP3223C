// Yvonne Aime 
// COP3223
// October 19, 2023

// Part 2- section 2 - Functions
// Mimics game of risk

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a_roll01, a_roll02, d_roll01, d_roll02, temp, sum = 0;

    // srand for seeding random number.
    srand(time(0));

    // Do rolls for the attacker and defender.
    a_roll01 = 1 rand() % 6;
    a_roll02 = 1 rand() % 6;
    d_roll01 = 1 rand() % 6;
    d_roll02 = 1 rand() % 6;

    // Print out the rolls.
    printf("The attacker's rolls are %d and %d\n", a_roll01, a_roll02);
    printf("The defender's rolls are %d and %d\n", d_roll01, d_roll02);

    // Order a_roll01
    if (a_roll01 > d_roll01) sum --;

    return 0;
}