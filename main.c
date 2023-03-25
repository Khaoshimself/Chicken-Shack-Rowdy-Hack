// Bryan Edited this file
//CHIMKEN

#include <stdio.h>
#include <time.h>
#include "header.c"
#include <stdlib.h>

int main(void){
  //player hands
  int p1[10];
  int p2[10];
  int p3[10];
  int p4[10];

  int numPlayers;
  int hitDecision = 0;
  int p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0;
  int card;
  
  int numPlayers; //number of players max 4
  int hitDecision; //hit or stand
  
  int p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0; //Player scores
  
  int card; //To hold dealt card
  
  
  printf("Welcome to Black Jack! \n How many players?"); // welcome statement
  scanf("%d", &numPlayers);
  
  if (numPlayers >= 1)//INITIAL DEALING OF THE CARDS
  {
    
    for (int i = 0; i < 2; i++) {
      card = dealCard();
      p1[p1Count] = card;
      p1Count++;
      }
    
    }
  if (numPlayers >= 2)
  {
      
      for (int i = 0; i < 2; i++) {
      card = dealCard();
      p2[p2Count] = card;
      p2Count++;
      }
         
    }
  if (numPlayers >= 3)
  {
    
    for (int i = 0; i < 2; i++) {
      card = dealCard();
      p3[p3Count] = card;
      p3Count++;
      }
    
    }
  if (numPlayers >= 4)
  {
    
    for (int i = 0; i < 2; i++) {
      card = dealCard();
      p4[p4Count] = card;
      p4Count++;
      }
    
    }    
  
}

int dealcard ()
{
  
  int card = 0;
  bool available;
  
  do {
    srand(time(0));
    card = (rand() % 13) + 1;
    available = cardcount(card)
    
  }
  while (!available)
  return card;
}



int calscore (int array[])
{
  
 int total = 0;
  
  for (int i = 0; i < 10; i++)
  {
    total =+ array[i];
  }
  
  if (total > 21)
    total = -1;
  
  return total
  }

bool cardcount (int card)
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
  
    
      
