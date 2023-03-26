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
      int* pointer = *ace-1;
      printf("\nYou drew an Ace. Is it 1 or 11");
             scanf("%d", &card);
      
    case 13 :     
      int *pointer = *king-1;
      printf("\nYou drew a King");
      
    case 2 :     
      int *pointer = *two-1;
      printf("\nYou drew a Two);
             
    case 3 : 
      int *pointer = *three-1;
      printf("\nYou drew a Three");
             
    case 4 : 
      int *pointer = *four-1;
      printf("\nYou drew a Four");
             
    case 5 :
      int *pointer = *five-1;
      printf("\nYou drew a Five");
             
    case 6 : 
      int *pointer = *six-1;
      printf("\nYou drew a Six");
             
    case 7 : 
      int *pointer = *seven-1;
      printf("\nYou drew a Seven");
             
    case 8 : 
      int *pointer = *eight-1;
      printf("\nYou drew a Eight");
             
    case 9 :
      int *pointer = *nine-1;
      printf("You drew a Nine");
             
    case 10 :
      int *pointer = *ten-1;
      printf("You drew a Ten");
             
    case 11 :
      int *pointer = *jack-1;
      printf("You drew a Jack");
      card = 10;
             
    case 12 :
      int *pointer = *queen;
      if (pointer > 0)
             {
               *pointer--;
               printf("\nYou drew a Queen");
             }
      return
             
    break;
  }
}
