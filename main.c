// Bryan Edited this file
//CHIMKEN

#include <stdio.h>
#include "header.c"
#include <stdlib.h>

int main(void){
  int p1[10];
  int p2[10];
  int p3[10];
  int p4[10];
  int numPlayers;
  int hitDecision = 0;
  int p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0;
  int p1Score = 0, p2Score = 0, p3Score = 0, p4Score = 0;
  int card;
  
  
  printf("Welcome to Black Jack! \nHow many players? ");
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
