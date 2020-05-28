#include <iostream>


using std::cout;
using std::cin;
using std::endl;


void display_even_numbers(int dividend)
{


  while (dividend > 0 && dividend <=50)
  {
    if(dividend % 2 == 0)
    {
      cout << dividend << endl;
      --dividend;
    }
    else 
    {
       --dividend;
    }
   
  }
}

int main()
{
void display_even_numbers(int dividend);
char again = '\0';//null character
int operand1 = 0, operand2 = 0;

cout << "\nDo you wish to multiply two numbers (y/n)? ";
cin >> again;

while(again == 'y' || again == 'Y')
{
  cout << "Enter first number: ";
  cin >> operand1;
  cout << "Enter the second number: ";
  cin >> operand2;

  cout << "Result: " << operand1
        << " * " << operand2  
        <<" = " << operand1 * operand2 << endl;
  
  cout << "\nDo you wish to multiply two more numbers (y/n)? ";
  cin >> again;
}

cout << "You are exiting the first program" << endl;

int dividend = 0;
cout << "Enter a number between 1 -50: ";
cin >> dividend;

display_even_numbers(dividend);




return 0;
}