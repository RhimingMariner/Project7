//sd
#ifndef RABBIT_H
#define RABBIT_H
#include "Animal.h"
#include "Grassland.h"
#include <iostream>
#include <list>
#include <stdlib.h>
#include <queue>
using namespace std;


class Rabbit : public Item{
  priority_queue<Item*, vector<Item*>, compareItem>* q;
  public:
    Rabbit();
    Rabbit(int k, priority_queue<Item*, vector<Item*>, compareItem >* q1) : item(k), q(q1){}
    void Run(){}
    ~Rabbit(){}
    //void Run(){
    //do something 
    }
  
  
    //~Rabbit(){}
};

#endif
/*

//ar



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
