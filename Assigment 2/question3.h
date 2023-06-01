/*
CMPT 125 Assignment 2 Question 3
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Define the enum Suit, struct Card, and struct Deck as described. The enum Suit has 4 values: Spades, Hearts, Clubs, Diamonds. The struct Card has 2 fields: Suit called suit, char called value. The struct Deck has 2 fields: char* pointing to a C string called brand, Card array of size 52 called cards
*/

#ifndef A2_Q3_H
#define A2_Q3_H

#define NUM_OF_CARDS_IN_DECK 52
typedef enum Suit{Spades, Hearts, Clubs, Diamonds}Suit;

typedef struct Card {
   Suit suit;
   char value;
} Card;

typedef struct Deck{
  char* pbrand;
  Card cards[NUM_OF_CARDS_IN_DECK];
}Deck;



#endif



