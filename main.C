#include <functional> 
#include <queue> 
#include <vector> 
#include <iostream>


using namespace std;
priority_queue<Item*, vector<Item*>, compareItem> q;
while(!q.empty()) {
        item = q.top();
        //cout << item << endl;
        cout << "Time: " << item -> getKey() << " : ";
        item -> run();
        q.pop();
    }

int main()
{ 
  //this part we might need to change idk yet
  int runtime[10000];
  for(int i = 0; i<=10001; i++)
  {
  	runtime[i]=i;
  }
  
  std::priority_queue<int, std::vector<int>, std::greater<int> > q; 
  for(int i = 0; i < 10001; i++) q.push(runtime[i]);
 
  print_queue(q); 
}

