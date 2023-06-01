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
#include "question4.h"



//a function that sorts an array of C strings into ascending alphabetical order
void sortAscending(char* stringArray[], unsigned int size){
  int i,j;  
  char* key;
  //INSERTION SORT IS USED 
    for (i = 1; i < size; i++) 
    {  
        key = stringArray[i];  
        j = i - 1;  

        while (j >= 0 && strcmp(stringArray[j] , key) > 0) 
        {  
            stringArray[j + 1] = stringArray[j];  
            j = j - 1;  
        }  
        stringArray[j + 1] = key;  
    }
    
}

char* getMedian(char* stringArray[], unsigned int size){
  sortAscending(stringArray , size);
  int median;
  if(size % 2 == 0){
    if(strcmp(stringArray[size/2 -1],stringArray[size/2]) > 0){
      median = size / 2 -1;
    }
    else{
      median = size/2;
    }
  }
  else{
    median = ((size -1) / 2);
  }

  median = median;
   return stringArray[median];
}