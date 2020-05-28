//
//  main.cpp
//  IO
//
//  Created by douglas popadince on 5/12/20.
//  Copyright © 2020 douglas popadince. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using std::cout;// cout stands for console output.
using std::cin;// The term cin stands for console Input
using std::endl;
using std::setw;
using std::setprecision;
using std::ios;//for formatting flags
using std::fixed;
using std::left;
using std::right;
using std::string;
using std::getline;

int main(int argc, const char * argv[]) {

    int int_exp = 99;
    /*
     insertion operator, we insert value into output stream
     */
    cout <<"int_exp: " << int_exp << '\n';
    
    /*
     The cin statement reads data from the input stream, which is the keyboard by default, and stores that value, if possible, in the variable used in the cin statement
     */
    
    int score = 0;
    cout << "Enter a score: ";
    cin >> score;//extraction operator (removes or extracts data from input stream)
    
    cout << "C++ is ";
    cout << "very cool";
    
    cout << "Hello\n";
    cout << "World";
    
    cout << "Computers are useless. \n";
    cout << "They can only  give you answers.\n"//notice no semicolon
            << "pablo picasso\n";
    
    int age_in_years = 0;
    
    cout << "Enter your age in years: ";
    cin >> age_in_years;
    cout << "age in years: " << age_in_years << '\n';
    
    int brothers, sisters;
    cout << "How many brothers do you have? ";
    cin >> brothers;
    cout << "How many sisters do you have? ";
    cin >> sisters;
    cout << "I have " << brothers << " brothers\n";
    cout << "I have " << sisters << " sisters\n";
    
    cout << "goodbye\n" << endl;
    
    float money = 123.45F;
    cout << "using setw(20) $" << setw(20) << money << endl;
    cout.setf(ios::fixed);//decimal notation
    cout << "using setprecision after settign \"fixed\" flag $" << setprecision(2) << money << endl;
    cout << "using manipulator instead of flags: $" << fixed << setprecision(2) << money << endl;

    /*
    Write a program that accepts as input from the keyboard a decimal number representing a person's temperature. Display the person's temperature on the screen, formatted so that it reserves six total spaces on the screen and will always show one decimal place, even if it is zero.

    Input
    "Enter your current temperature: "
    read temperature

    Process

    Output
    Display "Your current temperature is: "
    Display temperature using 6 spaces and a single decimal point
    */
   float temperature = 0;
   cout << "Enter your current temperature (98.4): ";
   cin >> temperature;
   cout << "You entered: " << setw(6) << setprecision(1) << temperature << '\n';

   /*
    Write a program that generates the following report and displays it to the screen. Use literals for all data. Make sure to display appropriate column headings. In the following sample, the fields are first name, GPA, class, major, and number of credits.

    input
    "Enter your first name"
    read first_name
    "Enter your GPA (3.0)"
    read your GPA
    "Enter  class name"
    read class_name
    "Enter your major"
    read major
    "Enter number of credits"
    read number_of_credits

    process

    output
    display title with first name, GPA, class, major, and number of credits
    display data for each of the title categories.
    first name is left justified with width of 10
    GPA is right justified, width of 3, precision of 3
    class is left justified with width of 10
    major is left justified with width of 30
    credits is right justified, width of 5
   */
    string first_name = "";
    float gpa = 0;
    string class_name = "";
    string major = "";
    float number_of_credits = 0.0;

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your GPA: ";
    cin >> gpa;
    cout << "Enter class name: ";
    /*
    Mixing 'cin' with 'getline'. 
    std::cin leaves the newline character in the buffer after pressing enter, and getline just grabs it and keeps going, that's why getline doesn't block to wait for input. You can use cin.ignore() to get rid of those extra characters before using getline().
    */
    cin >> class_name;
    cin.ignore(256, '\n');
    cout << "Enter your major: ";
    getline(cin, major);
    cout << "Enter number of credits: ";
    cin >> number_of_credits;


    cout << left << setw(15) << "First Name";
    cout << left << setw(6) << "GPA";
    cout << left << setw(15) << "Class";
    cout << left << setw(20) << "Major";
    cout << left << setw(3) << "Credits";
    cout << '\n';


    cout << left << setw(12) << first_name;
    cout << right << setw(6) << gpa << '\t';
    cout << left << setw(10) << class_name;
    cout << left << setw(20) << major;
    cout << right <<setw(3) << number_of_credits << endl;


    return 0;
}
