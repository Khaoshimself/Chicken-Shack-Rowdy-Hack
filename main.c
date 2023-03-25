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
  if (1 <= numPlayers)
  {
    do
    {
      p1Score = calScore (p1[]);
      printf("\nPlayer 1 your score is "%d" enter 1 to hit or 0 to stand", p1Score);
      scanf("%d", &hitDecision);
      if (hitdecision = 1)
      {
        card = dealCard();
        p1[p1Count] = card;
        p1Count++;
      }
      if (p1Score == -1)
        printf("\nPlayer 1 has busted")
    } while (hitDecision == 1 && p1Score != -1);
  }
  
  if (2 <= numPlayers)
  {
    do
    {
      p2Score = calScore (p2[]);
      printf("\nPlayer 1 your score is "%d" enter 1 to hit or 0 to stand", p2Score);
      scanf("%d", &hitDecision);
      if (hitDecision = 1)
      {
        card = dealCard();
        p2[p2Count] = card;
        p2Count++;
      }
      if (p2score == -1)
        printf("\nPlayer 2 has busted")
    } while (hitDecision == 1 && p2Score != -1);
  }
  if (3 <= numPlayers)
  {
    do
    {
      p3Score = calScore (p3[]);
      printf("\nPlayer 1 your score is "%d" enter 1 to hit or 0 to stand", p3Score);
      scanf("%d", &hitDecision);
      if (hitDecision = 1)
      {
        card = dealCard();
        p3[p3Count] = card;
        p3Count++;
      }
      if (p3Score == -1)
        printf("\nPlayer 3 has busted")
    } while (hitDecision == 1 && p4score != -1);
  }
 if (4 <= numPlayers)
  {
    do
    {
      p4Score = calScore (p4[]);
      printf("\nPlayer 1 your score is "%d" enter 1 to hit or 0 to stand", p4Score);
      scanf("%d", &hitDecision);
      if (hitDecision = 1)
      {
        card = dealCard();
        p4[p4Count] = card;
        p4Count++;
      }
      if (p4Score == -1)
        printf("\nPlayer 1 has busted")
    } while (hitDecision == 1 && p4Score != -1);
  }
  
}

  
    
      
