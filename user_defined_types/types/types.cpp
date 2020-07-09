#include <iostream>


using std::cin;
using std::cout;
using std::endl;


int main()
{


/*

A method of creating data types allows you to associate a list of identifiers with a type name. Any variable of this newly created type can have only the values you specified in the identifier list


Each identifier in the enum has an underlying integer value that, by default, starts at 0. Every subsequent identifier equates to the next value in sequential order.
*/
enum DaysOfWeek { SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
                  THURSDAY, FRIDAY, SATURDAY};

/*
CardRanks type specifies the identifier ACE to correspond with the value 1. All subsequent identifiers correspond to sequential values based on the last specified value, 1
*/
enum CardRanks { ACE = 1, DEUCE, TREY, FOUR, FIVE, SIX,
                SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};


//You can also specify a value for each individual identifier, as shown in the Coins type.
enum Coins {PENNY = 1, NICKELY = 5, DIME = 10, QUARTER = 25};



//declaring variables of the types you defined above (DaysOfWeek, CardRanks..)

DaysOfWeek today;

//this is example of using some, but not all the allowable values of this type
DaysOfWeek week[2] = {SUNDAY, MONDAY};

//creating a pointer variable, using dynamic memory allocation on the heap.
DaysOfWeek * new_day = new DaysOfWeek;
delete new_day;

DaysOfWeek best_day = SATURDAY;

//printing an enum identifier displays the underlying value, not the identifier itself.
cout << best_day << endl;// prints "6"


//------------------------Begin Structures------------------------------------//

/*it is illegal to try to provide an initial value for the data members within any  structure definition.

Be careful, however, when using pointer data members though; when a structure variable is destroyed, the dynamic memory allocated to the pointer is not automatically deallocated

example shows use of nested structures.  Best to define separate structures and then nest the separate defined structures into another structure.
*/

struct Date
{
  short month;
  short day;
  short year;
};

// structure has to be defined before it is used/nested in another structure
struct Student 
{
  int   id;
  char  fname[25];
  char  lname[25];
  char  gender;
  float gpa;
  Date  admit_date;//nested structure
};

struct Homework
{
  short   hw_id;
  Date    due_date;//nested structure
  Student submitted_by;//nested structure
  Date    submit_date;//nested structure
  short   score;
};


//declare variables
Student student;

//array of 20 students
Student cst126[20];

//pointer to a student created with dynamic memory allocation in heap
Student * student_ptr = new Student;

//initializing a Student variable
Student straight_a = {1, "Ima", "Smarty", 'F', 4.0F, {9,15,2007}};


//setting a value in a struct
cst126[0].id = 3;
//when working with cStrings
strcpy( cst126[0].fname, "Patty");

//acces data members from a pointer
Student * student3_ptr = new Student;
student3_ptr->id = 4;

//nested members
straight_a.admit_date.year = 2018;
cst126[0].admit_date.day = 10;

//acces data members from a pointer
student3_ptr->admit_date.month =9;



delete student_ptr;
delete student3_ptr;




//---------------------------End Structures----------------------------------//



  return 0;
}