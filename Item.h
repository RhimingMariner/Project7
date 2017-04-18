//ar

/*
class Item{
  int current;
  int key;
  public:
  Item() : key(0) {}
    Item(int k) : key(k){}
    int getKey() {return key;}
    void setKey(int k){key = k;}
    friend class Grasslands;
    friend class Animal;
    friend class LazyRabbit;
    friend class ActiveRabbit;
    friend class Wolf;
    friend class Rabbit;
    virtual void run() {cout << "Ran Item. NOT OK" << endl;}
    virtual ~Item(){}

};


//move to animal
//static Kill(Item I){
//  delete->this;
//}

struct compareItem
: binary_function<Item*, Item*, bool>
{
  bool operator()(const Item* t1, const Item* t2) const
  {
    return (t1->key > t2->key);
  }
}
*/
