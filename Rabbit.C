//rabbit

//From ActiveRabbit.C
/*
#include "Item.h"
#include "Grassland.h"
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

//LazyRabbit.C

#include "Item.h"
#include "Animal.h"
#include "Rabbit.h"
#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

class LazyRabbit : public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    LazyRabbit();
    LazyRabbit(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){cout << "LazyRabbit at " << getKey() << endl;
                setKey(getKey()+1;
                q->push(this);}
    ~LazyRabbit(){}
};


*/

