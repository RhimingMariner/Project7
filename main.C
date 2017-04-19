#include <functional> 
#include <queue> 
#include <vector> 
#include <iostream>
#include <cstdlib>
#include "Item.h"
#include "Grassland.h"
#include "Animal.h"
#include "Wolf.h"
#include "Rabbit.h"
//i am not sure if we need to include lazy and active
using namespace std;
//we can also put grassland here if you want

//Grassland field [512][512];

int main(int argc, char* argv[])
{
  if(argc <= 2 || argc >=4)
  {
    cout<<"error"<<endl;
  }
  else{
    int wolf = atoi(argv[1]);
    int rabbit = atoi(argv[2]);
  priority_queue<Item*, vector<Item*>, compareItem> q;
        
      Item* temp;
       for(int i = 0; i< rabbit; i++)
      {
         //int xCoord = rand() % 512;//mod 512 x
         //int yCoord = rand() % 512;//mod 512 y
        temp = new Rabbit(xCoord, yCoord, 0, &q);//make
        temp -> key = 0;
        q.push(temp);
      }

      for(int j = 0; j< wolf; j++)
      {
        temp = new Wolf(0, 0, 0, &q);//make
        temp -> key = 0;
        q.push(temp);
      }

        
        while(!q.empty()){
          temp = q.top();
          temp -> Run();
          q.pop();
        }
      }
        //give report of sim. stats
        //object.report() this part we might not need later*/
  

}
