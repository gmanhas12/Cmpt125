/*
CMPT 125 Assignment 1 Question 4
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Question4

//takes in a cstring (i.e., a character array that has a \0 character as the
// last element) that represents a mathematics operation (+, -, or *).
//Returns the result as an int.
int performMathOp(char* operation);
*/

#include "question4.h"

int performMathOp(char* operation)
{
  int s = 0, e = 0, tot = 0;
  int x =0, opt = 0, y = 0, len = 0;
  
  

  /* To find the length of the array*/
  while ((operation[x]) !='\0') {x++; len = x;}

 /* looping through the array until an operator and then getting the values before the operator.*/
  
  for (int x = 0; x < len; x ++) 
  {
    if ((operation[x])  == '*' ) 
    {y = x; opt = 0;break;}
    
    else if ((operation[x]) == '+' ) 
    {y = x; opt = 1; break;}
    
    else if ((operation[x]) =='-') 
    {y = x; opt = -1; break;}

    s = (10*s);
    s= (s) + ((operation[x]) - '0') ;
  }

  /* To get the values after operater  */
  /* to start after operater */
  y= y+1;
  /* end before \0*/
  while (operation[y] != '\0')
  {e =(e*10)+(operation[y]-'0');y++;}

  /*Math time, choosing which operator to use*/

  tot = (opt == -1) ? s - e: (opt == 1) ? s + e: s*e; 



  
  
  return tot;
}