#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int dealCard () {
  
  int card = 0;

  do {
    srand(time(0));
    card = (rand() % 13) + 1;
    bool available = cardCount(&card);
  } 
    while (available == false);
  return card;
}

int calScore (int array[]) {
  
 int total = 0;
  
  for (int i = 0; i < 10; i++) {
    total += array[i];
  }
  
  if (total > 21)
    total = -1;
  
  return total;
  }

bool cardCount (int &card) {
  switch (card) {
    case 1 :       
      int* pointer = *ace;
       if (*pointer > 0)
      {
        printf("\nYou drew an Ace. Is it 1 or 11");
        do 
        {
         scanf("%d", &card);
         if (card != 1 && card != 11)
           printf("\nPlease enter either 1 or 11");
        } while (card != 1 && card != 11);
        *pointer--;
        return true;
      }
    
             
      
    case 13 :     
      int *pointer = *king;
      if (*pointer > 0)
      {
        printf("\nYou drew a King");
        *pointer--;
        card = 10;
        return true;
      }
      
    case 2 :     
      int *pointer = *two;
      if (*pointer > 0)
      {
        printf("\nYou drew a Two");
        *pointer--;
        return true;
      }
             
    case 3 : 
      int *pointer = *three;
     if (*pointer > 0)
      {
        printf("\nYou drew a Three");
        *pointer--;
        return true;
      }
             
    case 4 : 
      int *pointer = *four;
       if (*pointer > 0)
      {
        printf("\nYou drew a Four");
        *pointer--;
        return true;
      }
             
    case 5 :
      int *pointer = *five;
      if (*pointer > 0)
      {
        *pointer--;
        printf("\nYou drew a Five");
        return true;
      }
      
    case 6 : 
      int *pointer = *six;
      if (*pointer > 0)
      {
        *pointer--;
        printf("\nYou drew a Six");
        return true;
      }
             
    case 7 : 
      int *pointer = *seven;
      if (*pointer > 0)
      {
        printf("\nYou drew a Seven");
        *pointer--;
        return true;
      }
      
    case 8 : 
      int *pointer = *eight;
      if (*pointer > 0)
      {
        printf("\nYou drew a Eight");
        *pointer--;
        return true;
      }
      
    case 9 :
      int *pointer = *nine;
      if (*pointer > 0)
      {
        printf("You drew a Nine");
        *pointer--;
        return true;
      }
      
    case 10 :
      int *pointer = *ten;
      if (*pointer > 0)
      {
        printf("You drew a Ten");
        *pointer--;
        return true;
      }
             
    case 11 :
      int *pointer = *jack;
      if (*pointer > 0)
      {
        *pointer--;
        printf("You drew a Jack");
        card = 10;
        return true;
      }
             
    case 12 :
      int *pointer = *queen;
      if (*pointer > 0)
             {
               *pointer--;
               printf("\nYou drew a Queen");
               card = 10;
               return true;
             }
    break;
    return;
  }
}
