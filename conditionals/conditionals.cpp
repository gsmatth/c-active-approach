#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;
using std::setprecision;
using std::fixed;
using std::endl;


int main(){

  /*
  Write the program to determine the level of membership for a local credit union. There are four levels: Platinum, Gold, Silver, and Copper. 
  
  If members have $25,000 or more, they are Platinum members. 
  
  If they have more than $10,000 but less than $25,000 and have two different types of accounts, checking and savings, they are Gold members. 
  
  If they have more than $10,000 but only have one type of account, they are Silver members. 
  
  Those members with $10,000 or less are Copper members. 
  
  Prompt for the amount of money as well as a character representing whether they have checking or savings accounts. For output, display the membership level.

  Input
  Prompt user to enter teh dollar amount of their membership as a decimal number with dollars and cents (10.25)
  read membership_cost
  Prompt user to state if they have a checking account (true or false):
  read has_checking_account
  Prompt user to state whether they have a savings account (true or false):
  read has_savings_account

  Constants

  Process
  if( membership_cost >= 25000) set membership_level to Platinum
  else if (membership > 10000 )
    if(has_checking_account && has_savings_account) set membership_level to Gold
    else if(has_checking_account || has_savings_account) set membership_level to Silver
  else set membership_level to Copper

  Output
  Output to screen "Your membership level is " membership_level
  */

 bool has_checking_account = false;
 bool has_savings_account = false;
 float current_balance = 0.0F;
 string membership_level = "";

 cout <<"Enter your combined current balance of all your banking accounts in dollars and cents, with no commas or dollar signs (2300.00):  ";
 cin >> current_balance;

cout << "Do you have a checking account (true or false): ";
cin >> has_checking_account;

cout << "Do you have a savings account (true or false): ";
cin >> has_savings_account;

if(current_balance >= 25000) 
{
  membership_level = "Platinum";
}
else if(current_balance > 10000){
  if(has_checking_account && has_savings_account)
  {
    membership_level = "Gold";
  }
  else if(has_checking_account || has_savings_account)
  {
    membership_level = "Silver";
  }
  else 
  {
    membership_level = "Copper";
  }
}
else membership_level = "Copper;";

cout << "Your membership level is " << membership_level << "\n";



short selection;

cout << "Student Grade Program";
cout << "- Main Menu -" << "\n\n";
cout << "1.  Enter Name" <<"\n"
      << "2.  Enter test scores" << "\n"
      << "3.  Display test scores" << "\n"
      << "9.  Exit \n\n";
cout << "Please enter your choice from the list above: ";
cin >> selection;

cout << "You chose : " << selection << endl;



short hour = 9, minute = 10, second = 5;
cout << (hour < 10 ? "0" : "") << hour << ":"
      << (minute < 10 ? "0" : "") << minute << ":"
      << (second < 10 ? "0" : "") << second << endl;

/*
writing a program that can be used to determine the grade assigned to an individual student based on the results of three exam scores. You will need to ask the user for the student's ID—a five-digit number created by the school—and the scores for each of the three exams. Once you have all the necessary input, please calculate the individual student's overall average and letter grade. The cutoffs for the letter grades are as follows:

A >= 92.0 B >= 84.0 C >= 75.0 D >= 65.0 F < 65.0

Input
Prompt to enter student ID(12345):
read student ID
Prompt to enter test score #1
read test score #1
Prompt user to enter score #2
read score #2
Prompt user to enter score #3
read score #3



Constants
A_GRADE = 92.0
B_GRADE = 84.0
C_GRADE = 75.0
D_GRADE = 65.0

Process
test_average = score_1 + score_2 + score_3 / 3
if test_average >= A_GRADE, final_grade is A
if test_average >= B_GRADE, final_grade is B
if test_average >= C_GRADE, final_grade is C
if test_average >= D_GRADE, final_grade is D
if test_average < D_GRADE, final_grade is F


Output
Display: Your final grade is: A-B-C-D-F
*/

const float A_GRADE = 92.0;
const float B_GRADE = 84.0;
const float C_GRADE  = 75.0;
const float D_GRADE  = 65.0;
float average_test_score = 0;
float test_score_1 = 0;
float test_score_2 = 0;
float test_score_3 = 0;
int student_id = 0;

cout << "Enter you 5 digit student ID number: ";
cin >> student_id;
cout << "Enter your first test score: ";
cin >> test_score_1;
cout << "Enter your second test score: ";
cin >> test_score_2;
cout << "Enter your third test score:  ";
cin >> test_score_3;

average_test_score = (test_score_1 + test_score_2 + test_score_3) / 3;

if(average_test_score >= A_GRADE)
{
  cout << "Your final grade is A" << endl;
}
else if (average_test_score >= B_GRADE)
{
    cout << "Your final grade is B" << endl;
}
else if (average_test_score >= C_GRADE)
{
    cout << "Your final grade is C" << endl;
}
else if (average_test_score >= D_GRADE)
{
    cout << "Your final grade is D" << endl;
}
else
{
    cout << "Your final grade is F" << endl;
}





int age = 0;
cout << "Enter your age: ";
cin >> age;

if(age == 1)
{
  cout << "First Birthday" << endl;
}
else if(age < 12)
{
  cout << "Child" << endl;
}
else if (age >= 12 && age <= 19)
{
  cout << "Teenager" << endl;
}
else if(age > 19 && age < 62)
{
  cout << "Adult" << endl;
}
else cout << "Senior" << endl;

return 0;
}