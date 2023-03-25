// Bryan Edited this file
//CHIMKEN

#include <stdio.h>
#include "header.c"

int main(void){
  int p1[10];
  int p2[10];
  int p3[10];
  int p4[10];
  int numPlayers;
  int hitDecision;
  int p1Count = 0, p2Count = 0, p3Count = 0, p4Count = 0;
  int p1Score = 0, p2Score = 0, p3Score = 0, p4Score = 0;
  
  
  printf("Welcome to Black Jack! \n How many players?");
  scanf("%d", &numPlayers);
  
  if (numPlayers >= 1). //INITIAL DEALING OF THE CARDS
  {
    dealCards(p1[], p1Count);
    dealCards(p1[], p1Count);
    
    }
  if (numPlayers >= 2)
  {
    dealCards(p2[]);
    dealCards(p2[]);
    }
  if (numPlayers >= 3)
  {
    dealCards(p3[]);
    dealCards(p3[]);
    }
  if (numPlayers >= 4)
  {
    dealCards(p4[]);
    dealCards(p4[]);
    }

      
  
}
