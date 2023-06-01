/*
CMPT 125 Assignment 1 Question 3
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Question3

//takes in the dimensions (rows and columns) of a 2D array of ints and the array
// itself, and performs a row subtraction operation as indicated by 2 other
// parameters representing the row numbers.
//Does not return anything as the change is within the 2D array.
void rowSubtraction(unsigned int rows, unsigned int columns,
    int matrix[rows][columns], unsigned int row1, unsigned int row2);

*/
#include "question3.h"

void rowSubtraction(unsigned int rows, unsigned int columns, int matrix[rows][columns],unsigned int row1, unsigned int row2) 
{
 int a_row = row1 ;
 
 int b_row = row2 ;

/* see if b_row is bigger than total amount of rows */

  if (b_row<rows)
 {
  /* loop through the arrray and subtract*/
  
  for (int x = 0; x < columns; x++)
   {
     matrix[a_row][x] = matrix[a_row][x]- matrix[b_row][x] ;
    }
  } 
}