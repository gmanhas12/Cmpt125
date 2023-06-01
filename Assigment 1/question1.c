/*
CMPT 125 Assignment 1 Question 1
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Question1

//interlaces a positive 4-digit int between 1000 and 9999
// with another positive 5-digit int between 10000 and 99999
//returns the result as a positive 9-digit int.
unsigned int interlace_ints(unsigned int firstNum, unsigned int secondNum);
*/

#include "question1.h"

unsigned int interlace_ints(unsigned int firstNum, unsigned int secondNum)
{
  /* firstNum */       /*Order of the digits when combined*/
  
  int b = (firstNum%10)*10; /* #8 */
  int c = ((firstNum/10)%10)*1000; /* #6 */
  int d = ((firstNum/100)%10)*100000; /* #4 */
  int e = ((firstNum/1000)%10)*10000000; /* #2 */

  /*secondNum */
  
  int z = (secondNum%10); /* #9 */
  int y = ((secondNum/10)%10)*100; /* #7 */
  int x = ((secondNum/100)%10)*10000; /* #5 */
  int w = ((secondNum/1000)%10)*1000000; /* #3 */
  int v = ((secondNum/10000)%10)*100000000; /* #1 */

  /* Adding the integers*/
  int l = v + e + w + d + x +c +y +b + z;

  return l;

}