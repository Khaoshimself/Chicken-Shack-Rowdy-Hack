// Bryan Edited this file
//CHIMKEN

#include <stdio.h>
#include <time.h>
#include "header.c"
#include <stdlib.h>
#include <stdbool.h>

int main(void){
  //player hands
  int p1[10];
  int p2[10];
  int p3[10];
  int p4[10];

  int p1Score = 0, p2Score = 0, p3Score = 0, p4Score = 0;
  
  
  int numPlayers; //number of players max 4
  int hitDecision = 0; //hit or stand
  
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

  
    
      
