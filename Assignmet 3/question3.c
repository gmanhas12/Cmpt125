/*
CMPT 125 Assignment 3 Question 3
Author: Gagan Manhas
Student ID: 301430394
SFU email: gma54@sfu.ca
Academic honesty statement: I hereby confirm that this is my own work and I have
not violated any of SFU’s Code of Academic Integrity and Good Conduct (S10.01).
Description: Implement the following functions of a stack that stores C strings as its items.
*/

#include "question3.h"

//checks if the stack is empty
bool cStringStack_isEmpty(cStringStack* csStack){
    if(csStack->size == 0){
      return true;
    }
    return false;
}

//creates a new stack following the struct defined
//a new stack has size = 0 and items = NULL
cStringStack* cStringStack_create(){	
    cStringStack* Newstack = (cStringStack*)malloc(sizeof(cStringStack));
    if(Newstack == NULL) {
      return NULL;
    }
    
      Newstack->size = 0;
      Newstack->items = NULL;
      return Newstack;
    
}

//pushes a given C string to the stack,
//you must copy the content instead of just the address
void cStringStack_push(cStringStack* csStack, char* cStr){
  if(cStringStack_isEmpty(csStack)){
    csStack->items = malloc(sizeof(char*));
  }
  
  else{
    char** p = realloc(csStack->items, (csStack->size + 1) * sizeof(char*));
    if(p == NULL) {
        printf("THERE was a problem reallocing room for the array");
        return;

    }
    csStack->items = p;
  }
  
  
  csStack->items[csStack->size] = malloc ((strlen(cStr) + 1) * sizeof (char));
  if(csStack->items[csStack->size] == NULL) {
      printf("THERE was a problem mallocing rooom for the array");
      return;
  }

  strcpy(csStack->items[csStack->size], cStr);
  csStack->size++;
}



//pops the C string from the stack,
//implemented by returning the address of the C string (copy)
//if the stack has 1 item, once popped it should become the same as a new stack,
//if the stack is empty, return NULL
char* cStringStack_pop(cStringStack* csStack){
  if(cStringStack_isEmpty(csStack) == true){
    return NULL;
  }
  char* temp = csStack->items[csStack->size -1];

  if(csStack->size == 1){
      csStack->items = NULL;
  }
  else{
    char** p = realloc(csStack->items, (csStack->size - 1) * sizeof(char*));
    if(p == NULL) {
        printf("THERE was a problem reallocing room for the array");
        return NULL;

    }
    csStack->items = p;
  }
  csStack->size--;
  

  
  
  return temp;
}

//frees all the memory used by the stack to store the C strings
void cStringStack_free(cStringStack* csStack){
  //freeing all the strings that we malloced
  for(int i = 0; i < csStack->size; i ++){
    free(csStack->items[i]);
  }
}

//reverse the order of the C strings stored so the first added one
// will be popped first, and so on
void cStringStack_reverse(cStringStack* csStack){
  if(cStringStack_isEmpty(csStack) == true){
    return ;
  }
  
  int j = csStack->size -1;
  for(int i = 0; i < j; i ++){
    char* temp = csStack->items[i];
    csStack->items[i] = csStack->items[j];
    csStack->items[j] = temp;
    j--;
  }
}

//creates a copy of a stack,
//each item has to be a C string with the same content but in different address
cStringStack* cStringStack_duplicate(cStringStack* csStack){
  cStringStack* copy = cStringStack_create();
  if(copy == NULL) {
      return NULL;
    }
  copy->items = realloc(copy->items, csStack->size * sizeof(char*));
  copy->size = csStack->size;

  for(int i = 0; i < csStack->size; i ++){
    copy->items[i] = malloc ((strlen(csStack->items[i]) + 1) * sizeof (char));
    strcpy(copy->items[i] , csStack->items[i]);
  }
  return copy;
}



