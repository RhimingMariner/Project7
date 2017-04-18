#ifndef
#define
#include "Item.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Class LazyRabbit : public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    LazyRabbit(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){cout << "LazyRabbit at " << getKey() << endl;
                setKey(getKey()+1;
                q->push(this);}
    ~LazyRabbit(){}
};
  
  
  
  
  
  
  
  
#endif
