/*
CMPT 125 Assignment 2 Question 4
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: a function that sorts an array of C strings into ascending alphabetical order
void sortAscending(char* stringArray[], unsigned int size);
a function that takes in an array of C strings (it can either be sorted or
unsorted) and returns the address of the “median” .*/

#include <stdio.h>
#include <stdlib.h>
#include "question4.h"

//a helper function to print the content in the array
//assumes stringArray is not NULL
void printStringArray(char* stringArray[], unsigned int size) {
  for (int i=0; i<size; i++) {
    printf("%s\n", stringArray[i]);
  }
}
int main() {
  //max length of a word
   int wordMax = 64;

  //ask the user for the number of words
  int numberOfWords = 0;
  printf("How many words are you going to input?: \n");
  scanf("%d", &numberOfWords);

  if(numberOfWords == 0){
    printf("No median to be found\n");
    exit(0);
  }
  char** stringArray = malloc(numberOfWords * sizeof(char*));

  if(stringArray == NULL){
    exit(0);
  }

  for(int i = 0; i < numberOfWords; i++){

  stringArray[i] = malloc(wordMax * sizeof(char));
    if(stringArray == NULL){
      exit(0);
    }
    printf("Input word #%d: ", i+1);
    scanf("%s", stringArray[i]);

  }

  char* medianName = getMedian(stringArray, numberOfWords);
  printf("The median string is %s\n", medianName);
  return 0;
};



