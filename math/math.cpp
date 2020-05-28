#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

float exchangeCurrency(float dollarAmount, float exchangeRate){
  return dollarAmount * exchangeRate;
}
int main(){

  int x, c;
  float a, b;

  float exchangeCurrency(float dollarAmount, float exchangeRate);

  c = (x * x) + (3 * x) + 2;
  a = ((10 + 6.0)/ 9.0) * 3.5;
  b = (-6 + (7 / 4)) / 3.0;

  float euroExchangeRate = 0.92;
  float canadaExchangeRate = 1.4;
  float mexicoExchangeRate = 23.6044;
  float japanExchangeRate = 107.25;
  float indiaExchangeRate = 75.71;
  double russiaExchangerate = 72.70;

  cout << "$10 converted to euros is: " << exchangeCurrency(10.0, euroExchangeRate) << " euros \n";
  cout << "$10 converted to canadian dollars is: " << exchangeCurrency(10.0, canadaExchangeRate) << " Canadian dollars \n";
  cout << "$10 converted to mexican pesos is: "<< exchangeCurrency(10.0, mexicoExchangeRate) << " Mexican pesos \n";

  int a1 = 0;
  cout << a1++ << endl;//0
  cout << ++a1 << endl;//2
  cout << a1 + 1 << endl;//3
  cout << a1 << endl;//2
  cout << --a1 << endl;//1

  int a2 = 0;
  a2 += 25;
  cout << "a2 = 25 + a is equal to: "<< a2 << "\n"; 

  int b2 = 2;
  b2 *= (a2 * 2);//100
  cout << "b2 should equal 100:  " << b2 << "\n";

  b2 += 1;
  cout << "b2 should equal 101: " << b2 << "\n";

  int c2 = 11;
  c2 %= 5;
  cout << "c2 should equal 1: " << c2 << "\n";

  int a3 = 5;
  b2 = 100;
  b2 /= a3;

  cout << "b2 should equal 20: " << b2 << "\n";


  const float PI = 3.141592F;
  float radius = 5;
  double area = 0;

  area = PI * pow(radius, 2);// PI times radius squared
  cout << area << " sq in " << endl;

  double param, result;
  param = 1024.0;
  result = (sqrt(param));
  cout << "The square root of 1024 is 32: " << result << "\n";

  param = 9.0;
  result = (sqrt(param));
  cout << "The square root of 9 is 3: " << result << "\n";

   param = -9.0;
  result = (sqrt(param));
  cout << "The square root of -9 is nan: " << result << "\n";

  cout << "ceil of 5.1: " << ceil(5.1) << "\n";
  cout << "ceil of 5.9: " << ceil(5.9) << "\n";
  cout << "floor of 5.1: " << floor(5.1) << "\n";
  cout << "floor of 5.9: " << floor(5.9) << "\n";

  double adjacent, opposite, hypotenuse;

  adjacent = 9;
  opposite  = 7;
  hypotenuse = sqrt( pow(adjacent, 2) + pow(opposite, 2));
  cout << "hypotenuse of 9, 7: " << hypotenuse << "\n";
  


  return 0;
}