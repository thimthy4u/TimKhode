#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#include "./library/temp1.h"

int main(){
  float num1,num2;
  cout << "Input (a+b)^2 : ";
  cin >> num1 >> num2;
  cout << math(num1, num2) << endl;
  return 0;
}

