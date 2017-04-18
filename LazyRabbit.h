//ar
//extern priority_queue<Item*, vector<Item*>, compareItem> pq;
//extern Grass grassGrid[512][512] gg;

#ifndef "LAZYRABBIT_H"
#define "LAZYRABBIT_H"
#include "Rabbit.h"
#include "Grassland.h"
#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

class LazyRabbit : public Item{
    priority_queue<Item*, vector<Item*>, compareItem >* q;
  
  public:
    LazyRabbit();
    LazyRabbit(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : Item (k), q(q1){}
    void Run(){};
    ~LazyRabbit(){};
};
  
/*
void LazyRabbit::run(){
  //do stuff (check if it died)
  //3 checks, isAlive(), Starvation(), 
  if(this->isAlive())
  {
    if(!(this->Starvation()))//change to Current - LastEaten >= 5
    {
      if(!(this->tooOld()))//change to 
      {
        
      }
    }
  }
  else
  {
    //increment DeadLRPop
    //decrement CurrentLRPop
    
  }
  //check if there is food (double for)
  key += 1;
  pq.push(this);
}


*/
