#include <iostream>
using namespace std;

class Coffee{
  public:
    string coffee;
    
    bool Empty(){
      return 1 > 0;
    }

    #include "timlibrary/refil.h"
    #include "timlibrary/drink.h" 
};

int main(){
  Coffee newCoffee;

  if(newCoffee.Empty()){
    newCoffee.Refilling();
  }else {
    newCoffee.Drinking();
  }
  return 0;
}
