// Yvonne Aime 
// COP3223
// November 06, 2023
// Lecture Assignment 5 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13 // Use 13 for faces (1 through King)

void dealCards(int suitsInHand[],  int facesInHand[]);
int analyzeHand(int suitsInHand[],  int facesInHand[]);
int anotherHand();

int main() {
    // Represents the two different hands (which will be compared)
    int hand1 = 0, hand2 = 0;

    // Used for seeding random number (shuffling cards).
    srand(time(NULL));

    // Setting each hand to the function anotherHand()
    hand1 = anotherHand();
    hand2 = anotherHand();

    // Computes the final results between the two hands.
    if (hand1 > hand2) 
        printf("Hand 1 has won the game!\n");
    else if (hand2 > hand1)
        printf("Hand 2 has won the game!\n");
    else 
        printf("It's a tie!!\n");

    return 0;
}

int anotherHand() {
    // suitsInHand[] and facesInHand[] array - all counters set to 0.
    int suitsInHand[SUITS] = {0};
    int facesInHand[FACES] = {0};  

    // Call dealCards() function to deal a hand.
    dealCards(suitsInHand, facesInHand);

    // Print the suits in a hand.
    printf("\nSuits in hand: Hearts = %d, Clubs = %d, Diamonds = %d, Spades = %d\n\n",
           suitsInHand[0], suitsInHand[1], suitsInHand[2], suitsInHand[3]);
    // Print the faces in a hand. 
    printf("Faces in hand: ");
    for (int i = 0; i < FACES; ++i) {
        printf("%d ", facesInHand[i]);
    }
    printf("\n\n"); // For formatting. 
    // Call analyzeHand() function to analyze the hand.
    return analyzeHand(suitsInHand, facesInHand);

}

/*  
    While dealing a hand of cards, keep a count of the suitsInHand, 
    and facesInHand. 
*/

void dealCards(int suitsInHand[],  int facesInHand[]) {
    /*  Both counters (suitsInHand[], facesInHand[]) -
        must add up to 5, for a hand of 5 cards.    */
    for (int i = 0; i < 5; ++i) {
        // Generate a random suit (0 to 3).
        int randomSuit = rand() % SUITS;

        // Generate a random face card (0 to 12 [2 to King]).
        int newFace = rand() % FACES;

        // Increment the corresponding suitsInHand and facesInHand counters.
        suitsInHand[randomSuit]++;
        facesInHand[newFace]++;
    }
}
// You will need to pass in the hand of cards, and have the function pass back if there is
// a flush, straight, three of a kind, etc.

int analyzeHand(int suitsInHand[],  int facesInHand[]) {
    int num_consec = 0;
    int rank, suit;
    int straight = 0;   // 0 - used to represent the boolean statement 'FALSE'
    int flush = 0;      // 0 - FALSE.
    int four = 0;       // 0 - FALSE.
    int three = 0;      // 0 - FALSE.
    int pairs = 0;      // 0 - FALSE.

    // check for flush – 5 cards of the same suit
    for (suit = 0; suit < SUITS; suit++)
        if (suitsInHand[suit] == 5)
            flush = 1; // 1 = TRUE. 
    // check for straight – eg. One each of 5,6,7,8,9
    // locate the first card.
    rank = 0;
    while (facesInHand[rank] == 0)
        rank++;

    // count the consecutive non-zero faces. 
    for (; rank < FACES && facesInHand[rank]; rank++)
        num_consec++;
    if (num_consec == 5) {
        straight = 1; // 1 = TRUE.
        //return;
    }
    // Check for 4-of-a-kind, 3-of-a-kind, and pairs. 
    for (rank = 0; rank < FACES; rank++) {
        if (facesInHand[rank] == 4)
            four = 1;   // 1 = TRUE.
        if (facesInHand[rank] == 3)
            three = 1;  // 1 = TRUE.
        if (facesInHand[rank] == 2)
            pairs++;
        }
    // Prints out final results. 
        if (straight && flush) {
            printf("Straight flush\n\n");
            return 8; // Used to compare the who wins (the larger # wins).
            }
        else if (four) {
            printf("Four of a kind\n\n");
            return 7;
            }
        else if (three && pairs == 1) {
            printf("Full house\n\n");
            return 6;
            }
        else if (flush) {
            printf("Flush.\n\n");
            return 5;
            }
        else if (straight) {
            printf("Straight.\n\n");
            return 4;
            }
        else if (three){
            printf("You have: Three of a kind.\n\n");
            return 3;
            }
        else if (pairs == 2) {
            printf("Two pairs.\n\n");
            return 2;
        }
        else if (pairs == 1) {
            printf("You have a Pair.\n\n");
            return 1;
        }
        else {
            printf("High card.\n\n");
            return 0;
        }
}


