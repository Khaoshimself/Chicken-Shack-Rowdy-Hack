// Bryan Edited this file
//CHIMKEN

#include <stdio.h>
#include <time.h>
#include "header.c"

int main(void){
  //player hands
  int p1[10];
  int p2[10];
  int p3[10];
  int p4[10];
  
  int numPlayers; //number of players max 4
  int hitDecision; //hit or stand
  
  int p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0; //Player scores
  
  int card; //To hold dealt card
  
  
  printf("Welcome to Black Jack! \n How many players?"); // welcome statement
  scanf("%d", &numPlayers);
  
  if (numPlayers >= 1). //INITIAL DEALING OF THE CARDS
  {
    
    for (int i = 0; i < 2; i++) {
      card = dealcard();
      p1[p1count] = card;
      p1count++;
      }
    
    }
  if (numPlayers >= 2)
  {
      
      for (int i = 0; i < 2; i++) {
      card = dealcard();
      p2[p2count] = card;
      p2count++;
      }
         
    }
  if (numPlayers >= 3)
  {
    
    for (int i = 0; i < 2; i++) {
      card = dealcard();
      p3[p3count] = card;
      p3count++;
      }
    
    }
  if (numPlayers >= 4)
  {
    
    for (int i = 0; i < 2; i++) {
      card = dealcard();
      p4[p4count] = card;
      p4count++;
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
  
    
      
