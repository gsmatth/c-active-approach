//
//  main.cpp
//  active_learning
//
//  Created by douglas popadince on 5/11/20.
//  Copyright © 2020 douglas popadince. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    unsigned short age = 21;
    float shoe_size = 8.5;
    float money = 123.45;
    float moneySuffix = 123.45F;
    int altitideInFeet = 0;
    char gender = 'F';
    short weight_in_pounds = 175;
    cout <<"sizeof char = " << sizeof( char ) << '\n';//1
    cout <<"sizeof double = " << sizeof(double) << '\n';//8
    cout <<"sizeof long double = " <<sizeof(long double) <<'\n';//16
    cout <<"sizeof int = " <<sizeof(int) <<'\n';//4
    cout <<"sizeof unsigned int = " <<sizeof(unsigned int) <<'\n';//4
    cout <<"sizeof long int = "<<sizeof(long int)<<'\n';//8
    cout <<"sizeof unsigned long = "<<sizeof(unsigned long)<<'\n';//8
    cout <<"sizeof variable age = "<<sizeof(age)<<'\n';
    cout <<"sizeof a float = "<<sizeof(float)<<'\n';
    cout <<"sizeof money = "<<sizeof(money)<<'\n';
    cout <<"sizeof moneySuffix = "<<sizeof(moneySuffix)<<'\n';
    cout <<"sizeof unsigned char = "<<sizeof(unsigned char)<<'\n';
    cout <<"sizeof char = "<<sizeof(char)<<'\n';
    cout <<"sizeof unsigned short = "<<sizeof(unsigned short)<<'\n';
    cout <<"sizeof short = "<<sizeof(short)<<'\n';
    
    /*
     inputs
        decimal production hours input from keyboard
        production hours read
        decimal pre-production houts input from keyboard
        pre-product hours read
        decimal producers hours input from keyboard
        producers hours read
     
     constants
        decimal PRODUCTION_RATE = 100.00
        decimal PRE_PRODUCTION_RATE = 60.00
        decimal PRODUCERS_RATE = 40.00
        
     process
        production billing = production hours * PRODUCTION_RATE
        pre-production billing = pre-production hrs * PRE_PRODUCTION_RATE
        producer billing = producer hrs * PRODUCERS_RATE
        total billing = production billing + preproduction billing + producer billing
     
     output
        decimal display production billing
        decimal display pre-production billing
        decimal display producer billing
        decimal display total billing
     
     */
    const float PRODUCTION_RATE = 100.25;
    const float PRE_PRODUCTION_RATE = 60.00;
    const float PRODUCERS_RATE = 40.00;
    
    float production_hours = .0;
    float pre_production_hours = .0;
    float producers_hours = .0;
    float production_billing = 0;
    float pre_production_billing = 0;
    float producer_billing = 0;
    float total_billing = 0;
    
    cout << "Enter the number of production hours: ";
    cin >> production_hours;
    cout << "Enter the number of pre-production hours: ";
    cin >> pre_production_hours;
    cout << "Enter the number of producers hours: ";
    cin >> producers_hours;
    
    production_billing = production_hours * PRODUCTION_RATE;
    pre_production_billing = pre_production_hours * PRE_PRODUCTION_RATE;
    producer_billing = producers_hours * PRODUCERS_RATE;
    total_billing = production_billing + pre_production_billing + producer_billing;
    
    cout << "Production billing is: $" << production_billing << '\n';
    cout << "Pre-production billing is: $" << pre_production_billing << '\n';
    cout << "Producer billing is: $" << producer_billing << '\n';
    cout << "Total billing is: $" << total_billing << '\n';
    
    char ascii = '1';
    cout << ascii << '\n';
    ascii = '2';
    cout << ascii << '\n';
    ascii = '3';
    cout << ascii << '\n';
    
    
    /*
     Write a C++ program to calculate how old you are in days. Declare an integer variable and initialize it to your age. Also, declare a constant that represents the number of days in a year.
     
     input
     "enter you current age in years:"
     read age_in_years
     
     constants
     DAYS_IN_YEAR = 365
     
     process
     age_in_days = age_in_years * DAYS_IN_YEAR
     
     output
     "Your age in days is: age_in_days
     */
    const int DAYS_IN_YEAR = 365;
    int age_in_years = 0;
    int age_in_days = 0;
    
    cout << "Enter your age to the nearest year: ";
    cin >> age_in_years;
    
    age_in_days = DAYS_IN_YEAR * age_in_years;
    cout << "Your age in days is approximately: " << age_in_days <<'\n';
    
    
    
    return 0;
}
