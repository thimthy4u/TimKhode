#include <iostream>
using namespace std;

int main(){
    
    int mt[3][3];
    
    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout << "Input matrix[" << i << "][" << j << "] : ";
            cin >> mt[i][j];
        }
    }
    
  cout << "Matrix: \n";
      for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
