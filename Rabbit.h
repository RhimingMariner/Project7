#ifndef RABBIT_H
#define RABBIT_H
#include "Animal.h"
#include <stdlib.h>


using namespace std;

//extern Grassland field [512][512];
class Rabbit : public Animal{
  
  public:
  
    int bday;
    Rabbit(int DOB, int x, int y, priority_queue<Item*, vector<Item*>, compareItem >* q): Animal(DOB, q){
        bday = DOB;
 
    this->x = x;
    this->y = y;
    }
    void Run(){
    if (getKey()<100)
    {
        key+= 2;
        //cout<<"Rabbit"<<endl;
        q->push(this);
        cout<<"Rabbit created"<<getKey()<<endl;
    }
    }
    ~Rabbit(){}
   
    };
  
  
  
    

#endif


/*


//LazyRabbit.h

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
//ActiveRabbit

#ifndef ACTIVERABBIT_H
#define ACTIVERABBIT_H
#include "Rabbit.h"
#include "Grassland.h"
#include <iostream>
#include <queue>
#include <list>
#include <stdlib.h>

using namespace std;

class ActiveRabbit : public Item{
  priority_queue<Item*, vector<item*>, compareItem>* q;
  public:
    ActiveRabbit();
    ActiveRabbit(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){}
    ~ActiveRabbit(){}

};
#endif



#include "Item.h"
#ifndef
#define
include namespace std;

Class Grassland : public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    Grassland(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){}
    ~Grassland(){}
};
  
  
  
  
  
  
  
  
#endif


Course.h
#indef COURSE_H_
#define COURSE_H_
class Course{
int courseNumber;
int nStudents;
char description[128];
public:
int getNStudents();
void setNStudents();
Course(int, int, char*);
~Course();
Course:
course(){
courseNumber = 100; // courseNumber(100)
nStudents = 0; //nStudents(0)

}
};
Course.C
#include "Course.h"
int Course:: getStudents() {return nStduents;}
void course:: setNStudents)(int n) {nStudents = n;}
course::Course(int a, int b, char *s){
courseNumber = a;
nStudents = b;
strcpy(description, s);
}
.h
class A{
public:
int *data;
A():data(new int [16]){}
~A() {delete[] data;}
}
class B{
A
public:
void FillData(A*b: int N);
}

.C
void B::FillData(A,*b, int N){
for(int i = 0; i < n; i++)
this->a.data[i] = b ->data[i];
}
void B::FillData(A&b, int N){
for(...)
a.data[i] = b.data[i];
}
B*c = new B();
B b;
A a;
b.FillData(&a,16);
b.FillData(a,16);
c->FillData(&a,16);


Course::nCourse(){
cout << "destructed" << courseNumber << endl;
delete[] description;
}
int main() {
course cs240(240,48, "240");
cout << cs240.getNstudents();
cs240.course = 0; //crossed out, private
Course * cs350 = new Course();
cs350 ->setNStudents(20);
Course*CS490 = new Course(490, 29, "490");
cs490->seNstudents(30);
delete 350;
delete cs490;//cs240 has no pointer so do not need to be deleted
}

*/
