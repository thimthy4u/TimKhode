#include <iostream>
using namespace std;
int main(){

  int array[]={10, 15, 18, 19};
  int length = sizeof(array)/sizeof(array[0]);
  cout <<"The length is : " << length << endl;
  for (int i = 0; i < length; i++) {
    if(array[i]%2==0){
      cout << array[i] << "\n";
    }
  } 
  return 0;
}
