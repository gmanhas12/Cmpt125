/*
CMPT 125 Assignment 3 Question 1
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Implement the Quicksort algorithm by writing a function that takes in a C string array, its size, and a bool
variable indicating whether it is sorted according to length or alphabetical order.
*/

#include "question1.h"

void swap(char* stringArray[],int i ,int  j) { 
    char* temp = stringArray[i]; 
    stringArray[i] = stringArray[j]; 
    stringArray[j] = temp; 
} 
 

int partition (char* stringArray[], int low, int high, bool byLength) { 
    char* pivot = stringArray[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++) { 
        // If current element is smaller than the pivot 
        if (!byLength && strcmp(pivot,stringArray[j]) > 0 ) 
        { 
            i++; // increment index of smaller element 
            swap(stringArray,i, j); 
        }

        else if (byLength && strlen(stringArray[j]) < strlen(pivot) ) 
        { 
            i++; // increment index of smaller element 
            swap(stringArray,i,j); 
        } 
    } 
    swap(stringArray,i + 1, high); 
    return (i + 1); 
} 

void quicksort(char* stringArray[], int low, int high, bool byLength){
  if (low < high) { 
        
        int pi = partition(stringArray, low, high,byLength);
        
        quicksort(stringArray, low, pi - 1, byLength); 
        quicksort(stringArray, pi + 1, high, byLength); 
    }
}
 

void quicksort_cstrings(char* stringArray[], int size, bool byLength){ 
    quicksort(stringArray,  0,  size-1, byLength);
} 




