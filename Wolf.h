#ifndef WOLF_H
#define WOLF_H
#include "Animal.h"
#include "Grassland.h"
#include <iostream>
#include <list>
#include <stdlib.h>
#include <queue>

using namespace std;


class Wolf : public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    Wolf();
    Wolf(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){};
    ~Wolf(){};
    //void Run(){
    //do something 
    }
  
  
    //~Rabbit(){}
};

#endif
