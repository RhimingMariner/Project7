#include <functional> 
#include <queue> 
#include <vector> 
#include <iostream>
#include <cstdlib>
#include "Item.h
#include "Grassland.h"
#include "Animal.h"
#include "Wolf.h"
#include "Rabbit.h"
//i am not sure if we need to include lazy and active
using namespace std;
//we can also put grassland here if you want
int main()
{
     priority_queue<Item*, vector<Item*>, compareItem> q;
        //srand(time(0);
        //Item* item;
        //where he pushed in # of lr, ar, w Type object(#, #, #, q);
        //i think we should have it be Grassland grass(5, 5, 2, q)
        //object.setKey(10000)
        //q.push(&object)
        while(!q.empty()) {
                item = q.top();
                //cout << item << endl;
                cout << "Time: " << item -> getKey() << " : ";
                item -> run();
                q.pop();
        }   
        //give report of sim. stats
        //object.report()
      
  //this part we might not need later
  int runtime[10000]; //item.setkey(10000);
        
  for(int i = 0; i<=10001; i++)
  {
  	runtime[i]=i;
  }
  
  std::priority_queue<int, std::vector<int>, std::greater<int> > q; 
  for(int i = 0; i < 10001; i++) q.push(runtime[i]);
 
  print_queue(q); 
}

