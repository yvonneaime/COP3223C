// Yvonne Aime 
// COP3223
// November 06, 2023
// Lecture Assignment 5 - Part 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Used for seeding random number (shuffling cards).
    srand(time(NULL));

    /*
        suitsInHand is 4 counters that represents-- how many 
        hearts, clubs, diamonds, spades are in the hand.

        These 4 counters must add up to 5 for a hand of 5 cards. 
            For example if you have 5 hearts in the hand
            of cards, the array would have the values 5,0,0,0
    */

   /*   facesInHand is 13 counters, that represent how many two’s, three’s, 
        etc. you have in the hand. This must also total 5. 
            For example, if you have a pair of 3’s, and three Kings’s, 
            this array would have the values
                0,2,0,0,0,0,0,0,0,0,3,0

    While dealing a hand of cards, keep a count of the suitsInHand, 
    and facesInHand. */

   // suitsInHand[] array with all counters set to 0.
    int suitsInHand[4] = {0};
    int facesInHand[14] = {0};

    // allCards represents the total number of cards in a hand.
    int allCards = 0;
    for (int i = 0; i < 4; ++i) {
        allCards += suitsInHand[i];
    }

    if (allCards == 5) {
        // Print the values of the suitsInHand array.
        printf("Suits in hand: Hearts=%d, Clubs=%d, Diamonds=%d, Spades=%d\n",
               suitsInHand[0], suitsInHand[1], suitsInHand[2], suitsInHand[3]);
    } else {
        // If the total is not 5, it prints an error message. 
        printf("Invalid: Total # of cards must be 5.\n");
    }


    return 0;
}