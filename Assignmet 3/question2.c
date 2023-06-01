/*
CMPT 125 Assignment 3 Question 2
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: write a function that initializes all the fields in a Deck variable by taking in the address of the variable
and a C string as the brand name.
write another function that shuffles the cards in the cards field.write a function that prints the cards of a Deck 13 cards per row
*/

#include "question2.h"


/*
CMPT 125 Assignment 3 Question 2
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: write a function that initializes all the fields in a Deck variable by taking in the address of the variable
and a C string as the brand name.
write another function that shuffles the cards in the cards field.write a function that prints the cards of a Deck 13 cards per row
*/

#include "question2.h"



#include <stdlib.h> //for the use of srand and rand
#include <stdio.h>


char suits[14] = {'A','2','3','4','5', '6','7','8','9','T','J','Q','K'};



//a function that initializes all the fields of a Deck.
// For each suit, the values of the cards are
// ‘A’, ‘2’, ‘3’, …, ‘9’, ,'T', ‘J’, ‘Q’, ‘K’.
void initializeDeck(Deck* theDeck, char* brandName){
  theDeck->brand = brandName;
  for(int j = 0 ; j < 4; j++){
    for(int i = 0; i < 13; i++){
      theDeck->cards[i + j * 13].value = suits[i];
      if(j == 0){
        theDeck->cards[i].suit = Spades;
      }
      else if(j == 1){
        theDeck->cards[i + j * 13].suit = Hearts;
      }
      else if(j == 2){
        theDeck->cards[i + j * 13].suit = Clubs;
      }
      else{
        theDeck->cards[i + j * 13].suit = Diamonds;
      }

    }
  }
}

//a function that shuffles the deck
void shuffleDeck(Deck* theDeck){
  int j = 0;
  Card temp;
  for(int i = 0; i < 52 -1; i++){
    j = i + rand() / (RAND_MAX / (52 - i) + 1);
    temp = theDeck->cards[j];
    theDeck->cards[j] = theDeck->cards[i];
    theDeck->cards[i] = temp;
  }
  
}

//a function that prints the content of a Deck.
void printDeck(const Deck* theDeck){
  printf("Brand of Deck: %s\n", theDeck->brand);
  for(int j = 0 ; j < 4; j++){
    for(int i = 0; i < 13; i++){
    printf("%c",theDeck->cards[i + j * 13].value);
    if(theDeck->cards[i + j * 13].suit == Spades){
      printf("\u2660 ");
    }
    else if(theDeck->cards[i + j * 13].suit == Hearts){
      printf("\u2663 ");
    }
    else if(theDeck->cards[i + j * 13].suit == Clubs){
      printf("\u2661 ");
    }
    else{
      printf("\u2662 ");
    }
   }
   printf("\n");
   
  }
}
