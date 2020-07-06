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

DaysOfWeek best_day = SATURDAY;

//printing an enum identifier displays the underlying value, not the identifier itself.
cout << best_day << endl;// prints "6"



  return 0;
}