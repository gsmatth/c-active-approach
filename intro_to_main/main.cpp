#include <iostream>
using std::cout;

int main(){
/*
Input (I) → Process (P) → Output (O)

Input
Enter a float for hourly rate, to 2 decimal places from keyboard.
Read hourly wage.
Enter float for hours per week worked, to 1 decimal place from keyboard.
Read hours per week.
Enter an integer for number of months work from keyboard.
Read number of months worked

Process
declare and assign  value to variable for hourly wage entered from keyboard
declare and assign  value to variable for number of hours worked per standard week
declare and assign value for tax percentage
declare a float variable for total taxes paid
declare and assign value for number of months of work that was entered from keyboard
gross pay = multiply hours per week times times hourly wage time hours per week worked times 4 weeks per month times number of months worked. 
taxes paid = multiply gross pay by tax percent.  
net pay = gross pay - taxes paid.

Output
print the gross pay as dollars and cents
print taxes withheld in dollars and cents
print net pay as dollars and cents

*/

float hoursPerWeekWorked, hourlyPayRate, totalTaxesPaid, grossPay, netPay;
int numberOfMonthsWorked;

hoursPerWeekWorked = 40;


//---------------written in C style------------------------------------//
printf("Enter your hourly rate in dollars and cents separated by decimal point (15.25: ");
scanf("%f", &hourlyPayRate);

printf("Enter the number of months you worked: ");
scanf("%i", &numberOfMonthsWorked);

grossPay = hoursPerWeekWorked * hourlyPayRate * (numberOfMonthsWorked * 4);
printf("gross pay = $%.2f\n", grossPay);
totalTaxesPaid = grossPay * .2;
printf("total taxes paid was = $%.2f\n", totalTaxesPaid);
netPay = grossPay - totalTaxesPaid;
printf("Net pay was = $%.2f\n", netPay);

//--------------------written in C++ --------------------------------//

cout << sizeof( char ) << '\n';

// unsigned short age = 21;
// cout << sizeof(age) << '\n';

// double long testDoubleLong = 2.5;
// cout << sizeof(testDoubleLong) << '\n';

  return 0;
}