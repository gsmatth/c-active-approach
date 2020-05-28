#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;


int main(){

  float money = 123.45F;
  float raise;

  cout << "You have $";
  cout << money << endl;

  cout << "Enter percent raise: ";
  cin >> raise;

  money = money * raise;

  cout << "After your raise you have $";
  cout << money << endl;

  return 0;
}