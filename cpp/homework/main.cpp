#include <iostream>
using namespace std;
int main(){
int a, b, c;
cout << "Enter a : ";
cin >> a;
cout << "Enter b : ";
cin >> b;

if(a % 2 == 0 && b % 2 == 0){
  cout << "So that : " << a << " / " << b << " : " << a/2 << " / " << b/2 << endl;
}else{
  cout << "So that : " << a/b << endl;
}
  return 0;
}
