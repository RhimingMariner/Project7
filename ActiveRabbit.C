
#include "Item.h"
#include "Grassland.h"
#in
#include <iostream>
#include <stdlib.h>
#include <list>
#include <queue>

using namespace std;

class ActiveRabbit: public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    ActiveRabbit::ActiveRabbit()
    {
      
    };
    ActiveRabbit(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){cout << "Animal at " << getkey() << endl;
                setKey(getKey()+2);
                q->push(this);}
    ActiveRabbit::~ActiveRabbit()
    {
      
    }
};
