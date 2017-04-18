#ifndef ANIMAL_H
#define ANIMAL_H
#include "Item.h"
#include "Grassland.h"
#include <iostream>
#include <stdlib.h>
#include <queue>


using namespace std;

class Animal : public Item{
  
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    Animal();
    Animal(constructor);
    int wolf;
    int lazyRabbit;
    //int activeRabbit;
    Animal(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){};
    void Run(){};
    ~Animal(){};
};
  
#endif
