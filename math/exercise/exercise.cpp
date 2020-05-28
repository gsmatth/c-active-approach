#include <iostream>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::right;
using std::left;
using std::setw;
using std::setprecision;
using std::fixed;

float cost_to_fill_pool(float diameter, float height){
  const int CUBIC_INCHES_PER_GALLON = 231;
  const double CUBIC_INCHES_PER_CUBIC_FOOT = 1728.0;
  const float PI = 3.141592F;
  const int GALLONS_PER_UNIT = 748;
  const float COST_OF_UNIT = 1.80;

  int radius = diameter / 2;

  double volume_of_cylinder = PI * (radius * radius) * height;

  float cubic_inches_of_pool = (volume_of_cylinder * CUBIC_INCHES_PER_CUBIC_FOOT);

  float units_in_pool = (cubic_inches_of_pool / CUBIC_INCHES_PER_GALLON) / GALLONS_PER_UNIT;

  float cost_to_fill_pool = units_in_pool * COST_OF_UNIT;

  return cost_to_fill_pool;


}

int main(){

//declare function prototype
float cost_to_fill_pool(float diameter, float height);
/*
Calvin is shopping for a circular, above ground swimming pool. He is currently looking at a pool that is 25′ in diameter and 5′ deep. Assume the Klamath Falls Water Department charges $1.80 per unit of water, and a unit is considered 748 gallons. Write a program that determines how much it will cost Calvin to fill his swimming pool. He will want to be able to enter different dimensions each time he runs the program so that he can determine which pool to buy. Here are some formulas and conversions that may help.

1 gallon (U.S.) = 231 cubic inches

1 cubic inch = 1/1,728 cubic foot

volume of a cylinder: πr2h

Input
prompt to enter diameter of pool in feet
read diameter of pool
prompt to enter depth of pool in feet
read depth of pool

Constants

const int CUBIC_INCH_PER_GALLON = 231
const double CUBIC_INCHES_PER_CUBIC_F00T = 1.0 * 1728.0
const float PI = 3.141592F;
const int UNIT_OF_WATER_IN_GALLONS = 748
const float COST_OF_UNIT = 1.80


Process
save radius of pool based on diameter entered
double volume_of_cylinder = PI * (radius * radius) * height
float cubic_inches_of_pool = (volume_of_cylinder * 1728.0)
float units_in_pool = (cubic_inches_of_pool / CUBIC_INCHES_PER_GALLON) / UNIT_OF_WATER_IN_GALLONS
float cost_to_fill_pool = units_in_pool * COST_OF_UNIT

Output

display to console the diameter and the depth of the pool
display to the console the cost_to_fill_pool
*/

float diameter = 0.0;
float height = 0.0;

cout << "Enter the diamter of the pool in feet: ";
cin >> diameter;
cout << "Enter the depth of the pool in feet: ";
cin >> height;

float cost = cost_to_fill_pool(diameter, height);

cout.precision(2);
cout << "The cost to fill the pool is: " << cost << "\n";


/*

Paul is building a workshop and has already figured out how much lumber he needs. The following table shows the cost at one of the local lumberyards for each item as well as the number of items Paul needs. Write a program that creates a report that lists each item, the quantity of each item, the cost per item, and the total cost for that item. The report should also include the total cost of all materials. Because Paul wants to determine which lumberyard will give him the best deal, he will need to be able to specify the cost of each item.


Input:
prompt to enter price per joists in dollars and cents
read price per joist
prompt to enter price per 2 x 4 in dollars and cents
read price per 2 x 4
prompt to enter price per 2 x 6 in dollars and cents
read price per 2 x 6
prompt to enter price of 4 x 4 in dollars and cents
read price of 4 x 4
prompt to enter price of 4 x 8 sheep plywood in dollars and cents

Constants:
const int JOIST_QUANTITY  = 25
const int TWO_BY_SIX_QUANTITY = 100
const int TWO_BY_FOUR_QUANTITY = 25
const int FOUR_BY_FOUR_QUANTITY = 20
const int PLYWOOD_QUANTITY = 100

Process:
cost_for_joists = JOIST_QUANTITY * price_per_joist
cost_for_2_by_6s = TWO_BY_SIX_QUANTITY * price_per_two_by_six
cost_for_2_by_4s = TWO_BY_FOUR_QUANTITY * price_per_two_by_four
cost_for_4_by_4s = FOUR_BY_FOUR_QUANTITY * price_per_four_by_four
cost_for_plywood = PLYWOOD_QUANTITY * price_per_plywood
total_cost = cost_for_joists + cost_for_2_by_6s + cost_for_2_by_4s + cost_for_4_by_4s + cost_for_plywood


Output:
output to console title header with Description, Cost Per Unit, Quantity Needed, cost_for_joists

output to screen Joists, price_per_joist, JOIST_QUANTITY, cost_for_joists

output to screen 2 X 6, price_per_two_by_six, TWO_BY_SIX_QUANTITY, cost_for_2_by_6s

output to screen 2 x 4, proice_per_2_by_4, TWO_BY_FOUR_QUANTITY, costs_for_2_by+4s

output to screen 4 x 4, price_per_4_by_4, FOUR_BY_FOUR_QUANTITY, costs_for_4_by_4s

output to screen 4 x 8 plywood, price_per_plywood, PLYWOOD_QUANTITY, costs_for_plywood

output to screen Total costs = total_cost

*/


const int JOIST_QUANTITY  = 25;
const int TWO_BY_SIX_QUANTITY = 100;
const int TWO_BY_FOUR_QUANTITY = 25;
const int FOUR_BY_FOUR_QUANTITY = 20;
const int PLYWOOD_QUANTITY = 100;

float price_per_joist = 0.0F;
float price_per_two_by_six = 0.0F;
float price_per_two_by_four = 0.0F;
float price_per_four_by_four = 0.0F;
float price_per_plywood = 0.0F;


cout << "Enter the price per joist in dollars and cents (75.99): ";
cin >> price_per_joist;
cout << "Enter the price per 2 x 6 in dollars and cents (7.99): ";
cin >> price_per_two_by_six;
cout << "Enter the price per 2 x 4 in dollars and cents (5.99): ";
cin >> price_per_two_by_four;
cout << "Enter the price per 4 x 4 in dollars and cents (15.99): ";
cin >> price_per_four_by_four;
cout << "Enter the price per plywood in dollars and cents (25.99): ";
cin >> price_per_plywood;

float cost_for_joists = JOIST_QUANTITY * price_per_joist;
float cost_for_2_by_6s = TWO_BY_SIX_QUANTITY * price_per_two_by_six;
float cost_for_2_by_4s = TWO_BY_FOUR_QUANTITY * price_per_two_by_four;
float cost_for_4_by_4s = FOUR_BY_FOUR_QUANTITY * price_per_four_by_four;
float cost_for_plywood = PLYWOOD_QUANTITY * price_per_plywood;
float total_cost = cost_for_joists + cost_for_2_by_6s + cost_for_2_by_4s + cost_for_4_by_4s + cost_for_plywood;

cout << setw(15) << left << "Description" 
      << setw(15) << left << "Cost Per Unit" 
      << setw(20) << left << "Quantity Needed" 
      << setw(10) << left << "Subtotal" << "\n";


/*
On the default floating-point notation, the precision field specifies the maximum COMBINED number of meaningful digits to display BEFORE and  AFTER the decimal point.  In both the fixed and scientific notations, the precision field specifies exactly how many digits to display AFTER the decimal point ONLY, even if they are trailing decimal zeros.
*/
cout << setw(15) << left << "Joists"
      << setw(1) <<left << "$"
      << setw(15) << left << setprecision(2) << fixed << price_per_joist
      << setw(20) << left << JOIST_QUANTITY
      << setw(1) <<left << "$"
      << setw(10) << left <<setprecision(2) << fixed <<cost_for_joists
      <<"\n";

cout << setw(15) << left << "2 X 6"
      << setw(1) <<left << "$"
      << setw(15) << left << setprecision(2) << fixed << price_per_two_by_six
      << setw(20) << left << TWO_BY_SIX_QUANTITY
      << setw(1) <<left << "$"
      << setw(10) << left <<setprecision(2) << fixed << cost_for_2_by_6s
      <<"\n";

cout << setw(15) << left << "2 X 4"
      << setw(1) <<left << "$"
      << setw(15) << left << setprecision(2) << fixed << price_per_two_by_four
      << setw(20) << left << TWO_BY_FOUR_QUANTITY
      << setw(1) <<left << "$"
      << setw(10) << left <<setprecision(2) << fixed << cost_for_2_by_4s
      <<"\n";

cout << setw(15) << left << "4 X 4"
      << setw(1) <<left << "$"
      << setw(15) << left << setprecision(2) << fixed << price_per_four_by_four
      << setw(20) << left << FOUR_BY_FOUR_QUANTITY
      << setw(1) <<left << "$"
      << setw(10) << left <<setprecision(2) << fixed << cost_for_4_by_4s
      <<"\n";

cout << setw(15) << left << "Plywood Sheets"
      << setw(1) <<left << "$"
      << setw(15) << left << setprecision(2) << fixed << price_per_plywood
      << setw(20) << left << PLYWOOD_QUANTITY
      << setw(1) <<left << "$"
      << setw(10) << left <<setprecision(2) << fixed << cost_for_plywood
      <<"\n";

cout << setw(50) << right << "Total Cost: $"
      << right << setprecision(2) << fixed << total_cost << "\n";



/*
Jeanie recently decided to go shopping for a newer 4-wheel drive Jeep to use for commuting to school. She is hoping to put $1,000 or so down on her new purchase. Your job is to develop the necessary program to calculate and display what her payment would be based on the cost of the car, the amount of money she puts down, the time period of the loan, and the interest rate.


Input
prompt to enter cost of car in dollars and cents
read cost of car
prompt to enter amount put down in dollars and cents
read amount of down payment
prompt to enter the interest rate (4.3)
read interest rate
prompt to enter the number of monthly payments you want 
read number of payments


Constants

Process
numerator = (principal - down payment) * (interest rate / 12)
denominator = (1 - (1 + (interest rate / 12)raised to -m) )
monthly payment = numerator / denominator

Output
output to screen The monthly payment based on a principal of x dollars, y interest rate, and z number of monthly payments would be n number of dollars and cents

*/

float interest_rate = 0.0;
float principal = 0.0;
float down_payment = 0.0;
float number_of_monthly_payments = 0.0;
float monthly_payment_amount = 0.0;

cout << "Enter the interest rate of the loan (example for 4.2 % enter 0.042): ";
cin >> interest_rate;
cout << "Enter the price of the car in dollars and cents, with no commas (12000.00: ";
cin >> principal;
cout << "Enter the amount of the down payment in dollars and cents with no commas (2500.50): ";
cin >> down_payment;
cout << "Enter the number of monthly payments you want to make (60): ";
cin >> number_of_monthly_payments;

float numerator = (principal - down_payment) * (interest_rate / 12);//good 3150
float sub_denominator = 1 + (interest_rate / 12);//good 1.35
float interim = pow(sub_denominator, -number_of_monthly_payments);
float denominator = (1 - interim);
monthly_payment_amount  = numerator / denominator;

cout << "The amount of your monthly payment will be: $"
      <<setprecision(2) << fixed << monthly_payment_amount << "\n";


  return 0;
}