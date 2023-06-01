/*
CMPT 125 Assignment 2 Question 1
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Write a recursive function that expands a positive int by adding 0’s between the digits and returns the
result as a positive int. If the input int has only one digit, return the input directly.
*/

#include "question1.h"

unsigned int expand_int(unsigned int number) {
  //checking number
  if ((number < 10)&&(number%10==number)){
    return number;
  }
    
  
  //adding zeros
  else {
    int a = (number/10);
    int b = (number%10);
    return (expand_int(a)*100) + (expand_int(b));
  }
  
}


