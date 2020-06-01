#include <iostream>


using std::cout;
using std::cin;
using std::endl;


void multiply_two_numbers(char again, int operand1, int operand2)
{
char do_again = again;
while(do_again == 'y' || do_again == 'Y')
{
  cout << "Enter first number: ";
  cin >> operand1;
  cout << "Enter the second number: ";
  cin >> operand2;

  cout << "Result: " << operand1
        << " * " << operand2  
        <<" = " << operand1 * operand2 << endl;
  
  cout << "\nDo you wish to multiply two more numbers (y/n)? ";
  cin >> do_again;
}

}
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

void square_the_number(int number)
{
  char menu_choice = '\0';

  do 
  {
    cout << "1) Square the Number\n"
      << "2) Cube the Number\n"
      << "3) Exit\n"
      << "Please enter menu choice: ";
    cin >> menu_choice;

    switch(menu_choice)
    {
      case '1':
        cout << number << " Squared = "
              << number * number << endl;
        break;
      case '2':
          cout << number << " Quebed = "
                << number * number * number << endl;
          break;
      case '3':
          cout << "Goodbye" << endl;
          break;
      default:
          cout << "Invalid menu option" << endl;
    }
  }
  while (menu_choice != '3');
}

int main()
{
void multiply_two_numbers(char again, int operand1, int operand);
void display_even_numbers(int dividend);
void square_the_number(int number);


char again = '\0';//null character
int operand1 = 0, operand2 = 0;
cout << "\nDo you wish to multiply two numbers (y/n)? ";
cin >> again;
multiply_two_numbers(again, operand1, operand2);


cout << "You are exiting the first program" << endl;

int dividend = 0;
cout << "Enter a number between 1 - 50: ";
cin >> dividend;

display_even_numbers(dividend);


float number = 0;

cout << "Please enter a number: ";
cin >> number;

square_the_number(number);


int number_of_assignments = 0;
int sum_of_assignments = 0;

cout << "How many assignments do you have for this class: ";
cin >> number_of_assignments;

for(int i = 0; i < number_of_assignments; i++)
{
  int class_score = 0;
  cout << "Enter the score for class " << i + 1 << ": ";
  cin >> class_score;
  sum_of_assignments += class_score;
}
float average_score = sum_of_assignments / number_of_assignments;

cout << "The average score of your assignments is " << average_score << "\n";
return 0;
}