#include <iostream>
using namespace std;

int main(){
    
    int mt[3][3];
    
    // [3,9,7]
    // [4,8,5]
    // [2,6,1]
    
    
    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout << "Element [" << i << "][" << j << "] : ";
            cin >> mt[i][j];
        }
    }
    
  cout << "Element : \n";
      for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
