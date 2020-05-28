#include <iostream>
#include <iomanip>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

using std::cout;
using std::cin;

int main(){

  float fahrenheit = 0;
  float celsius = 0;

  cout << "Enter temperature in Fahrenheit: ";
  cin >> fahrenheit;

  celsius = (5.0 / 9.0) * (fahrenheit - 32);

  cout << fahrenheit << " degrees f = "
      << celsius << " degrees C" << endl;

  return 0;
}