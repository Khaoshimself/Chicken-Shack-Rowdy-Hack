// header.c for black jack

#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int dealCard ()
{
  
  int card = 0;

  do {
    srand(time(0));
    card = (rand() % 13) + 1;
    bool available = cardCount(card);
    
  } while (available == false);
  return card;
}



int calScore (int array[])
{
  
 int total = 0;
  
  for (int i = 0; i < 10; i++)
  {
    total += array[i];
  }
  
  if (total > 21)
    total = -1;
  
  return total;
  }

bool cardCount (int card)
{
 
  switch (card)
  {
    case 1 : 
      
    break;
      
    case 2 : 
      
    break;
      
    case 3 : 
      
    break;
      
    case 4 : 
      
    break;
      
    case 5 : 
      
    break;
      
    case 6 : 
      
    break;
      
    case 7 : 
      
    break;
      
    case 8 : 
      
    break;
      
    case 9 : 
      
    break;
      
    case 10 : 
      
    break;
      
    case 11 : 
      
    break;
      
    case 12 : 
      
    break;
    
    case 13 :
      
    break;
  }
}
 