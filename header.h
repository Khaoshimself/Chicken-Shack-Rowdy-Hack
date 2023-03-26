#ifndef HEADER_H
#define HEADER_H
#include <stdbool.h>
  
typedef struct players{
  int p1, p2, p3, p4;
} 
players;
 

int dealCard();
int calScore(int array[]);
void playerInfo(int p1, int p2, int p3, int p4);
bool cardCount (int &card);

#endif //end of header.h file
