/*
#include "Item.h"
#include "Grassland.h"
#include <iostream>
#include <stdlib.h>
#include <list>
#include <queue>

using namespace std;

class Animal:public Item{
	//priority_queue<Item*, vector<Item*>, compareItem>* q;

  public:
  	Animal( int k, priority_queue<Item*, vector<Item*>, compareItem>* &q)
  	{

  	};
    Animal(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : Item(k), q(q1){}
    void Run(){cout << "Animal at " << getKey() << endl;
                setKey(getKey()+2);
                q->push(this);}
    ~Animal(){};
};
 
  
  */
  
  
  
  
 
