//ar


#ifndef GRASSLAND_H
#define GRASSLAND_H
#include "Item.h"
#include <iostream>
#include<stdlib.h>
#include <queue>

include namespace std;

class Grassland : public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    Grassland();
    Grassland(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){}
    ~Grassland(){}
};
  
  
  
  
  
  
  
  
#endif
