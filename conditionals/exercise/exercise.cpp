#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std:: endl;
using std:: setprecision;
using std:: fixed;






/*
Write a program that accepts two integers that represent the numerator and denominator of a fraction. Display the fraction in an acceptable form in regard to negative signs. Also, if the numerator is larger than the denominator, display the number as a mixed fraction.

Input
Prompt user to input number 1
read number 1
Prompt user to enter number 2
read number 2

Constants

Process
if(number_two is 0) return error statement
else if (number_one  < 0 && < number_two < 0)
  if(number_one > number_two)
    whole_number = number_one / number_two
    revised_numerator = number_one % number_two
    display  whole_number " " revised_numerator "/" denominator
  else
    display abs(number_one|) "/" abs(number_two)
else if (number_one >= 0 && number_two < 0)
  if(abs(number_one) > abs(number_two))
    whole_number = number_one / number_two
    revised_numerator = number_one % number_two
    display  "-"whole_number " " revised_numerator "/" abs(denominator)
  else
    display "-"number_one "/" abs(number_two)
else if (number_one < 0 and number_two > 0)
  if(number_one > number_two)
    whole_number = number_one / number_two
    revised_numerator = number_one % number_two
    display  "-"whole_number " " revised_numerator "/" abs(denominator)
  else
    display "-" abs(number_one) "/" number_two
else 
  if(number_one > number_two)
    whole_number = number_one / number_two
    revised_numerator = number_one % number_two
    display  whole_number " " revised_numerator "/" denominator
  else
    display number_one "/" number_two


Output
diplay number one and number two as a fraction or a mixed number


*/
void displayFraction(int numerator, int denominator){
 int  whole_number = 0, revised_numerator = 0, revised_denominator = 0;

  if(denominator == 0)
  {
    cout << "Zero is an invalid denominator \n";
  }
  else if (numerator < 0 && denominator < 0)
  {
    if(numerator <= denominator)
    {
      whole_number = numerator / denominator;
      revised_numerator = -(numerator % denominator);
      revised_denominator = -(denominator);
      if(revised_numerator == 0)
      {
        cout << whole_number << "\n";
      }
      else 
      { 
        cout << whole_number << " " << revised_numerator << "/" << revised_denominator << "\n";  
      }
    }
    else 
    {
      cout << numerator << "/" << denominator << "\n";   
    }
  }

  else if(numerator < 0 && denominator > 0)
  {
    if(abs(numerator) >= abs(denominator))
    {
      whole_number = numerator / denominator;
      revised_numerator = -(numerator % denominator);
      if(revised_numerator == 0)
      {
        cout <<whole_number << "\n";
      }
      else 
      {
        cout << whole_number << " " << revised_numerator << "/" << denominator << "\n";
      }
    }
    else 
    {
      cout << numerator << "/" << denominator;
    }
  }
  else if (numerator > 0 && denominator < 0)
    {
    if(abs(numerator) >= abs(denominator))
    {
      whole_number = numerator / denominator;
      revised_numerator = -(numerator % denominator);
      if(revised_numerator == 0)
      {
        cout <<whole_number << "\n";
      }
      else 
      {
        cout << whole_number << " " << revised_numerator << "/" << denominator << "\n";
      }
    }
    else 
    {
      cout << numerator << "/" << denominator;
    }
  }
  else
  {
   if(numerator >= denominator)
   {
     whole_number = numerator / denominator;
     revised_numerator = numerator % denominator;
     if(revised_numerator == 0)
     {
       cout << whole_number << "\n";
     }
     else {
        cout << whole_number << " " << revised_numerator << "/" << denominator << "\n";
     } 
   }
   else 
   {
     cout << numerator << "/" << denominator << "\n";
   }
  }
}

/*
Write a program that accepts both the interest rate and the amount of a loan. Check to make sure the interest rate of the loan is between 1% and 18% and that the amount of the loan is between $100 and $1000. If the data fails either of these conditions, display an appropriate error message and end the program. Determine the cost of the loan fees. If the amount of the loan is between $100 and $500, there is a fee of $20. If the loan is more than $500, the fee is $25. Calculate the amount of interest paid on the loan, and display the requested amount of the loan, the interest rate, and the sum of the interest and fees.

Input
prompt user to enter the amount of loan in dollars and cents(999.45)
read principle
prompt user to enter down_payment amount
read down_payment amount
prompt user to enter the interest rate a whole percent (4.2)
read interest rate
prompt user for number of monthly payments

Constants
LOW_PRINCIPLE_FEE = 20.00
HIGH_PRINCIPLE_FEE = 25.00

Process
convert interest rate by dividing 100
reduce principle by down_payment
if principle is greater than or equal to 100 and less than or equal to 1000 display error message
if the loan interest rate is less than .01% or greater than .18%, display error message
if principle is greater than or equal to 100 or less than or equal to 500, fee is LOW_PRINCIPLE_FEE
if principle is greater than 500 and less than or equal to 1000, than fee is HIGH_PRINCIPLE_FEE

determine monthly payments:
numerator = (principal - down payment) * (interest rate / 12)
denominator = (1 - (1 + (interest rate / 12)raised to -m) )
sub_denominator = (1 + interest_rate / 12)
sub_denom_pow = pow(sub_denom, -number_of_monthly_payments)
denominator = (1 - sub_denom_pow)
monthly_payment_principle_and_interest = (numerator / denominator)

loan_fee_monthly_payment = loan_fee  / number_of_monthly _payments
total_interest_and_fees = ((monthly_payment_amount_principle_and_interest * number_of_monthly_payments) -  principle) + loan_fee

complete_monthly_payment = monthly_payment_principle_and_interest + loan_fee_monthly_payment;




Output
display principle, monthly payments, sum of interest and fees
*/

void displayLoanData(int number_of_monthly_payments, float loan_principle, float down_payment, float interest_rate)
{
const float LOW_PRINCIPLE_FEE = 20.00;
const float HIGH_PRINCIPLE_FEE = 25.00;

float reduced_principle = loan_principle - down_payment;
float formatted_interest_rate = interest_rate / 100;
float loan_fee = 0;
float numerator = 0, denominator = 0, sub_denominator = 0, sub_denominator_pow = 0;

if(reduced_principle < 100 || reduced_principle > 1000)
{
  cout << "The loan amount is not an acceptable amount.  It must be between $100 and $1000 \n";
  return;
}

if(formatted_interest_rate < 0.01 || formatted_interest_rate > 0.18)
{
  cout << "The interest rate you entered is not valid.  It must be between 1% and 18% \n";
  return;
}

if(reduced_principle > 500.00 && reduced_principle < 1000.00)
{
  loan_fee = HIGH_PRINCIPLE_FEE;
}
else if (reduced_principle >= 100.00 && reduced_principle <= 500.00)
{
  loan_fee = LOW_PRINCIPLE_FEE;
}

numerator = (reduced_principle) * (formatted_interest_rate / 12);

sub_denominator = (1 + formatted_interest_rate / 12);

sub_denominator_pow = pow(sub_denominator, -number_of_monthly_payments);
denominator = (1 - sub_denominator_pow);
float monthly_payment_principle_and_interest = (numerator / denominator);

float loan_fee_monthly_payment = loan_fee  / number_of_monthly_payments;

float total_interest_and_fees = ((monthly_payment_principle_and_interest * number_of_monthly_payments) -  reduced_principle) + loan_fee;

float complete_monthly_payment = monthly_payment_principle_and_interest + loan_fee_monthly_payment;

cout << "Monthly payments will total: $" << fixed << setprecision(2) 
      << complete_monthly_payment << "\n";

cout << "The total interest and fee you pay on  a principle of $" 
     << fixed << setprecision(2) << reduced_principle 
     << " is $" << total_interest_and_fees << "\n";

return;

}

/*
Given a quadratic equation in the form of ax2 + bx + c = 0, solve for the roots of the equation.  Be sure to verify that it is a valid quadratic equation by checking a to make sure it is not zero. If it is zero, display an appropriate error message. Also, if the discriminant—the expression in the square root—is less than zero, display an error message stating that the roots will be complex, imaginary numbers. If the discriminant is zero, the roots will be the same, so display the root and the fact that the roots are identical. Hint: You will need to use the square root math function to solve this problem.

Extra Challenge: Instead of just displaying an error message if the roots are complex, display the complex roots in the correct format for complex numbers.

Input
Prompt user to enter a b c
read a >> b  >> c

Constants

Process
double discriminant = (b * b) - (4 * a * c);
if(discriminant < 0) display error message that the roots will be complex, imaginary numbers;

else if (discriminant > 0)
first_solution = (-(b) + sqrt((b * b) - (4 * a *c)) / (2 * a)
second_solution = (-(b) - sqrt((b * b) - (4 * a *c)) / (2 * a)

if(discriminant == 0) 
first_solution = (-(b) + sqrt((b * b) - (4 * a *c)) / (2 * a)
display first  with message stating that both positive and negative roots are the same answer, folowed by

Output
see proces above
*/

void solve_quadratic(double a, double b, double c)
{
double discriminant = ( b * b) - (4 * a * c);
double first_solution = 0.0;
double second_solution = 0.0;

if(discriminant < 0)
{
  
  double real_solution = -b / (2 * a);
  double imaginary_solution = sqrt(-discriminant) / (2 * a);

  cout << "The solution in a complex number\n"
      << "The real part is: " << real_solution << "\n"
      << "The imaginary part is: +/-  "<< imaginary_solution  << "i\n";
  return;
}
else if (discriminant > 0)
{
  first_solution = (-b + sqrt(discriminant)) / (2 * a);
  second_solution = (-b - sqrt(discriminant)) / (2 * a);
  cout << "The two solutions are: " << first_solution << " and " << second_solution << "\n";
  return;
}
else 
{
  first_solution = (-b + sqrt(discriminant)) / (2 * a);
  cout << "The single solutions is: " << first_solution  << "\n";
  return;
}
return;
}




int main(){

  void displayFraction(int numerator, int denominator);
  void displayLoanData(int number_of_monthly_payments, float loan_principle, float down_payment, float interest_rate);
  void solve_quadratic(double a, double b, double c);

  
  
//------------------------diplsayFraction---------------------------------------//
  int numerator = 0, denominator = 0;

  cout << "Enter the first number: ";
  cin >> numerator;
  cout << "Enter second number: ";
  cin >> denominator;

  displayFraction(numerator, denominator);

//----------------------------------------------------------------------------//



//------------------------displayLoanData--------------------------------------//
  int number_of_monthly_payments;
  float loan_principle = 0, down_payment = 0, interest_rate = 0;

  cout << "Enter the cost of the vehicle you want to buy in dollars and cents (999.45): ";
  cin >> loan_principle;
  cout << "Enter the amount of your down payment in dollars and cents (75.00): ";
  cin >> down_payment;
  cout << "Enter the number of monthly payments you want to make: ";
  cin >> number_of_monthly_payments;
  cout << "Enter the interest rate of the loan (4.25): ";
  cin >> interest_rate;

  displayLoanData(number_of_monthly_payments, loan_principle, down_payment, interest_rate);

//----------------------------------------------------------------------------//




//-----------------------------solve_quadratic_formula-----------------------//
double a, b, c;

cout << "Enter the values of a, b, and c from quadratic equation: ";
cin >> a >> b >> c;
solve_quadratic(a, b, c);



//--------------------------------------------------------------------------//


/*
 Write a program that converts 24-hour military time to standard time. Accept the hours, minutes, and seconds from the user, and verify that the inputs are correct. If any of the inputs are invalid, display an error message and end the program. Otherwise, display the output so that each portion of the time is displayed with two digits and the appropriate AM or PM. Use the conditional operator to both display the time as well as determine whether to use AM or PM
*/



/*
 Display a menu to the user that has the following options:

—Main Menu—

1. Calculate Area

2. Calculate Volume

Write a switch statement that handles the user's choice. For each of the main menu options, display a submenu that has the following options. 

—Area Menu—	—Volume Menu—
a. Rectangle	a. Cylinder
b. Circle	b. Sphere
c. Right Triangle	


Write nested switch statements to handle each of the submenus. For all of the switch statements, use the default case to handle any incorrect menu options. If you are unsure of the correct formulas, research them on the Internet or in your math books. Display the results of each of the calculations based on the appropriate user input.
*/


  return 0;
}