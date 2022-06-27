// Hoppock, Zachary
// equalsOperator.cpp
// 9/27/20
// Testing the = operator
// Version # 1
#include <iostream>

using namespace std;

int main()
{  

int floor;
cout << "What floor will you go to? ";
cin >> floor;

if (floor == 13)
  cout << "Please choose valid floor";
else
  cout << "Going up/down";

return 0;
}