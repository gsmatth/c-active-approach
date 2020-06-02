#include <iostream>
#include <iomanip>


using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;


float DetermineAverage(int a, int b, int c);
void GetInput( float & salary, int & years_service );
void CalcRaise( float & salary, int years_service );
int CalcBonus( int years_service );
void PrintCalculations( int years_service, float salary, int bonus );
void GetTimeInput(int & hour, int & min, int & sec, bool & isAM);
// you set default VALUES in the prototypes not the function definition
void DisplayTime(int hour, int min, int sec, bool isAM, bool isStandard = true);

int main()
{
 

  // int a, b, c;
  // float average;
  // cout << "Enter three numbers you want to average ( 1 2 3): ";
  // cin >> a >> b >> c;

  // average = DetermineAverage(a, b, c);
  //  cout << "The average is: " << average << "\n";

  // float salary = 0;
  // int years_service = 0, bonus = 0;

  // GetInput( salary, years_service );
  // CalcRaise( salary, years_service );
  // bonus = CalcBonus( years_service );
  // PrintCalculations( years_service, salary, bonus );

int hour = 0, min = 0, sec = 0;
bool isAM;

GetTimeInput(hour, min, sec, isAM);
DisplayTime(hour, min, sec, isAM);
//we are calling the function and passing an argument "false" which is one of teh default/optional parameters defined in the function prototype/declaration
DisplayTime(hour, min, sec, isAM, false);

return 0;
};

void GetTimeInput(int & hour, int & min, int & sec, bool & isAM)
{
  cout << "Enter time in format HH MM SS(12 30 45): ";
  cin >> hour >> min >> sec;
  cout << "Is this AM (true/false)? ";
  cin >> isAM;

}
//you list the default parameters in definition but you do not assign VALUES to parameters
void DisplayTime(int hour, int min, int sec, bool isAM, bool isStandard)
{ 
  if(isStandard && isAM)
  {
    cout << "The current time is " << hour << ":" << min << ":" << sec << "am" << endl;
  }
  if(isStandard && !isAM)
  {
    cout << "The current time is " << hour << ":" << min << ":" << sec << "pm" << endl;
  }
  if(!isStandard && isAM)
  {
    cout << "The current time is " << hour << ":" << min << ":" << sec << "hrs" << endl;
  }
  if(!isStandard && !isAM)
  {
    hour += 12;
    cout << "The current time is " << hour << ":" << min << ":" << sec << "hrs" << endl;
  }
}

// float DetermineAverage(int a, int b, int c)
// {
//   int sum = a + b + c;
//   float average = sum / 3.0;

//   return average;
// }

/*
Write a program that asks for an employee's salary and years of service. Use the following functions to manipulate the information as described, as well as the included function signatures.

void GetInput( float & salary, int & years_service );

This function prompts for and reads the required salary and years of service.

void CalcRaise( float & salary, int years_service );

This function changes the salary depending on the years of service. If the employee has greater than 10 years of service, he or she will receive a 10% raise. Between 5 and 10 years, the raise is 5%. Everybody else will receive a 2% raise.

int CalcBonus( int years_service );

This function calculates and returns the employee's bonus for the year. An employee will receive $500 for every 2 years of service.

void PrintCalculations( int years_service, float salary, int bonus );

This function will display in a clear and professional manner all of the calculated information.
*/

// void GetInput( float & salary, int & years_service )
// {
//   cout << "Enter your current salary rounded to the nearest whole dollars (12500): ";
//   cin >> salary;
//   cout << "Enter the number of full years of service (not partial years): ";
//   cin >> years_service;
// }

// void CalcRaise( float & salary, int years_service )
// {
//   if(years_service > 10)
//   {
//     float raise_amount = salary * .1;
//     salary += raise_amount;
//   } else if (years_service >= 5 && years_service <= 10)
//   {
//     float raise_amount = salary * .05;
//     salary += raise_amount;
//   } else 
//   {
//     float raise_amount = salary * .02;
//     salary += raise_amount;
//   }
// }

// int CalcBonus( int years_service )
// {
//   int bonus = (years_service / 2) * 500;
//   return bonus;
// }

// void PrintCalculations( int years_service, float salary, int bonus )
// {
//   cout << "Based on " << years_service << " years of services"
//         << " your updated salary is $" <<fixed << setprecision(2)
//         << salary <<".\n"
//         << "Your bonus for this year is $" <<fixed << setprecision(2)
//         << bonus << endl;
// }

/*
Write a program that uses a function to read three values representing hours, minutes, and seconds. Pass these three values to another function that will display the time in an appropriate style. A fourth optional argument to the display function specifies whether to display the time in 24-hour notation, military time, or standard format. Both of these functions are to be called from main. Be sure to call the display function using three arguments as well as four arguments.

input: 
prompt user to enter hour min sec
read hour min sec

constants:

process:
void GetTimeInput()
{
  cout << "enter time in format HH MM SS (12 13 00): "
  cin>> hour >> min >> sec
}

void DisplayTime(int hour, int minute, int second)
{
  cout << The current time is hh:min:sec
}


output
display time in standard format or military format
*/

