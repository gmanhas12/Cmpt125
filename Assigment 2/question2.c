/*
CMPT 125 Assignment 2 Question 2
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: First write a recursive function that takes in one unsigned long as its input and returns the value by
applying foo. 
Next, write a non-recursive function that does exactly the same thing but returns the result much faster.

The number of times the foo_recursive function is
called when n is 30 is 1346356. */

#include "question2.h"

int x = 0;
// with recursion
unsigned long foo_recursive(unsigned long n){
  if (n<2){
  return n + 1;
  }
  if (n>=2){
  x++;
  return (2 * foo_recursive(n-2)+foo_recursive(n-1) + n+2);
  }

  return 0;
}
// fast one
unsigned long foo_fast(unsigned long n){
  if (n<2){
    return n + 1;
    }
  
  for (int y = 0; y < n; y++) {
    
    return 2 * foo_recursive(n-2) + foo_recursive(n-1) + (n+2);
  }
  return 0;
}













