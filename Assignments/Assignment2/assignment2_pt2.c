// Yvonne Aime
// COP3223 
// September 13, 2023
// Lecture Assignment 2 - Part 2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int user_num;

    // Asks user to input a number 1 - 20. 
    printf("Please enter a number between 1 and 20.\n");
    scanf("%d", &user_num);
    
    // Ouputs the corresponding roman numeral to the number entered. 
    switch (user_num) 
    {
        case 1:
            printf("I. \n");
            break;
        case 2:
            printf("II.\n");
            break;
        case 3:
            printf("III.\n");
            break;
        case 4:
            printf("IV.\n");
            break;
        case 5:
            printf("V\n");
            break;
        case 6:
            printf("VI.\n");
            break;
        case 7:
            printf("VII.\n");
            break;
        case 8:
            printf("VIII.\n");
            break;
        case 9:
            printf("IX.\n");
            break;
        case 10:
            printf("X.\n");
            break;
        case 11:
            printf("XI.\n");
            break;
        case 12:
            printf("XII.\n");
            break;
        case 13:
            printf("XIII.\n");
            break;
        case 14:
            printf("XIV.\n");
            break;
        case 15:
            printf("XV.\n");
            break;
        case 16:
            printf("XVI.\n");
            break;
        case 17:
            printf("XVII.\n");
            break;
        case 18:
            printf("XVIII.\n");
            break;
        case 19:
            printf("XIX.\n");
            break;
        case 20:
            printf("XX.\n");
            break;
    
        // Error message - displayed when user inputs a number outside of the range (1-20).
        default:
            printf("ERR0R: You have entered a number outside of the range.\nTry Again!\n\n");
            // Terminates the program. 
            exit(-1);
    }
    return 0;
}