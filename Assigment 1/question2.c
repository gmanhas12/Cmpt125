/*
CMPT 125 Assignment 1 Question 2
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Question2

//takes in 3 parameters: an int array, its size, an int called “target”,
// and a char array of size 32
//Puts a cstring in the format A+B to that char array, where A and B are the
// indexes of a pair of elements in the int array that add up to the target
// value. Puts the cstring not_found in the char array if no such pair exists.
void findPair(int array[], unsigned int size, int target, char* result);
*/

#include "question2.h"

void findPair(int array[], unsigned int size, int target, char* result)
{
  char* char_array = result;

  /*for loop but not considering last element*/
  for (int x = 0; x < size - 1; x++)
  {
    /* starting from the x'th element all the way to the last element*/
    for (int y = x + 1; y < size; y++)
    {
      /* If a pair is found*/
      if (array[x] + array[y] == target)
      {
        sprintf(char_array, "%d + %d",x ,y);
        return;
      }
    }
  }

  /* If no pair was found*/
  sprintf(char_array, "not_found");
}