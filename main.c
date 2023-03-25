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
  int card;
  
  
  printf("Welcome to Black Jack! \n How many players?");
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
