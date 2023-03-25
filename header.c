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
    bool available = cardCount(card);
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

bool cardCount (int card) {
  switch (card) {
    case 1 :       
    case 2 :     
    case 3 :     
    case 4 :  
    case 5 : 
    case 6 : 
    case 7 : 
    case 8 :    
    case 9 : 
    case 10 : 
    case 11 : 
    case 12 : 
    case 13 :
    break;
  }
}
