#include <iostream>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::toupper;
using std::getline;

const int MAX_VALUES = 25;

int GetValues(int values[]);
float CalculateMean(int values[], int num_values);
int FindMode(int values[], int num_values);

int main()
{
  char first_name[MAX_VALUES] = "Billy";
  char last_name[MAX_VALUES] = {'o'};
  char temp_name[MAX_VALUES] = {'o'};
  char full_name[(MAX_VALUES * 2)] = {'o'};
  int counter = 0;


  // cout << "Enter your first name: ";
  // cin >> first_name;
  // cout << "Enter your last name: ";
  // cin >> last_name;
  // first_name[0] = toupper(first_name[0]);
  // last_name[0] = toupper(last_name[0]);
  // cout << "the first character in first_name: "<< first_name[0] << endl;

  // cout << "Good morning " << first_name << " " << last_name << endl;


  // for(int i = 0; i < MAX_VALUES; i++)
  // {
  //   if(first_name[i] != '\0')
  //   {
  //     full_name[i] = first_name[i];
  //     counter++;
  //   }
  // }
  // full_name[counter++] = ',';
  // full_name[counter++] =  ' ';

  // for(int i = 0; i < (MAX_VALUES); i++)
  // {
  //   if(last_name[i] != '\0')
  //   {
  //     full_name[counter] = last_name[i];
  //     counter++;
  //   }
  // }
  // full_name[counter] = '\0';



// char holder_1[10] = {0};
// char holder_2[10] = {0};
// char part_1[10] = "hello ";
// char part_2 [10] = "world";

// strcpy(holder_1, part_1);
// cout << "holder_1 is : " << holder_1
//       << " and part_1 is: " << part_1 << endl;

// strncpy(holder_2, part_2, 3);

// cout << "holder_2 is: " << holder_2
//       <<" and part_2 is " << part_2 << endl;



// char lname[16];
// char fname[16];
// char wname[32];

// cout << "Please enter the first name: ";
// cin >> fname;

// cout <<"Please enter the last name: ";
// cin >> lname;
// strcpy(wname, fname);
// strcat(wname, " ");
// strcat(wname, lname);

// cout << "The whole name is: " << wname <<endl;


char string_1[] = "jammie";
char string_2[] = "jamie";

cout << "\n Comparing: \t" << string_1
      <<"\n with: \t\t" << string_2 << "\n\n";

int result = strcmp(string_1, string_2);
int result_2 = strncmp(string_1, "jam", 3);

if(result > 0)
{
  cout<< "string_1 is greater than string_2 above\n";
}
else if(result < 0)
{
  cout << "string_1 is than string_2\n";
}
else 
{
  cout << "string_1 and string_2 are equal\n";
}

if(result_2 > 0)
{
  cout<< "string_1 is greater than string_2 above\n";
}
else if(result < 0)
{
  cout << "string_1 is than string_2\n";
}
else 
{
  cout << "string_1 and string_2 are equal\n";
}
/*
Declare a third array that will hold the user's last name and first name, separated by a comma and a space. Use loops to iterate through the names one character at a time, storing them into the full name array. Don't forget about the terminating character.

Input:
Prompt user for first name
read first name
Prompt user for last name
read last name

Constants:none

Process:

loop through the two arrays and write combined names to third array
Combine first last names into a single string.  
counter = 0;
for(i = 0; i < MAX_VALUE; i++)
{
  if(first_name[i] != '\0')
  {
    full_name[i] = first_name[i]
    counter++
  }
}
full_name[counter++] = ","
full_name[counter++] = " "

for (int i = 0; i < (MAX_VALUE * 2); i++)
{
  if(last_name[i] != '\0')
  {
    full_name[counter] = first_name[i]
    counter++
  }
}
full_name[counter] = '\0'


Output:
*/

  /*
  Write a program that uses an array to store 10 elements, representing 10 students’ test scores that will be entered from the keyboard. Given the following grading scale, iterate through the array, determine the letter grade each score will receive, and store the grade in a corresponding character array.

  Display the numeric score and the corresponding letter grade. Also calculate and display the class average as well as the number of students that receive each letter grade. For the purposes of this exercise, everything should be done from main.

  Input:
  within a for loop
  Prompt user to enter test score (0-100)
  read test_score into array
  Prompt if you want to enter another test score
  read y/n answer into again variable

  Constants:
  NUMBER_OF_STUDENTS = 10

  Process:
  declare an array to store test_gradess
  for(0, < NUMBER_OF_STUDENTS, i++)
  {
    
    if(test_scores[i] >= 92.0)
    {
      test_grades[i] = 'A';
    } else if(test_scores[i] >= 84.0)
    {
      test_gradess[i] = 'B'
    } else if(test_scores[i] >= 75.0)
    {
      test_gradess[i] = 'c'
    } else if(test_scores[i] >= 65.0)
    {
      test_gradess[i] = 'D'
    } else 
    {
      test_grades[i] = 'F'
    }
    
  }

  Output:

  */

// const int NUMBER_OF_STUDENTS = 10;
// int test_scores[NUMBER_OF_STUDENTS] = {0};
// char test_grades[NUMBER_OF_STUDENTS];
// float sum = 0;

// int counter = 0, a_students = 0, b_students = 0, c_students = 0, d_students = 0, f_students =0;
// char again = '\0';

// do
// {
//   cout << "Enter a test grade: ";
//   cin >> test_scores[counter];
//   counter++;

//   cout << "Do you wish to enter another grade (Y/N): ";
//   cin >> again; 
  
// } while (toupper(again) == 'Y' && counter <= NUMBER_OF_STUDENTS);

// for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
// {
//   if(test_scores[i])
//   {
//     sum += test_scores[i];
//   }
// }

// for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
// {
//   if(test_scores[i])
//   {
//      if(test_scores[i] >= 92.0)
//     {
//       test_grades[i] = 'A';
//       a_students++;

//     } else if(test_scores[i] >= 84.0)
//     {
//       test_grades[i] = 'B';
//       b_students++;
//     } else if(test_scores[i] >= 75.0)
//     {
//       test_grades[i] = 'C';
//       c_students++;
//     } else if(test_scores[i] >= 65.0)
//     {
//       test_grades[i] = 'D';
//       d_students++;
//     } else 
//     {
//       test_grades[i] = 'F';
//       f_students++;
//     }
//   } else;
// }

// for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
// {
//   if(test_scores[i])
//   {
//     cout << "Student #" << i + 1 << " score is: " << test_scores[i] 
//         << " or grade: " << test_grades[i] << endl; 
//   }
  
// }
// cout << "# of A students: " << a_students << endl;
// cout << "# of B students: " << b_students << endl;
// cout << "# of C students: " << c_students << endl;
// cout << "# of D students: " << d_students << endl;
// cout << "# of F students: " << f_students << endl;

// cout << "The average score for all students was: " << sum / counter << endl;



int values[MAX_VALUES] = {0}, num_values = 0, mode = 0;
float mean = 0;

//the function below poplates the array and returns the number of elements you entered, which is assigned to num_values;
num_values = GetValues(values);
mean = CalculateMean(values, num_values);
mode = FindMode(values, num_values);

cout << "Mean = " << mean << endl;
cout << "Mode = " << mode << endl;


return 0;
}

int GetValues (int values[])
{
  int num_values = 0;
  char enter_more = 'n';

  do
  {
    cout << "Enter a value: ";
    //we use the line below to access num_values current value and then increment the VALUE AFTER we use it.  This eliminates having to add another step where we increment num_values in a separate statement.
    cin >>values[num_values++];

    cout << "Enter another value (y/n)? ";
    cin >> enter_more;
  } while (toupper(enter_more) == 'Y' && num_values < MAX_VALUES);

  return num_values;
}

int FindMode(int values[], int num_values)
{
  int mode;
  int count, oldcount = 0;

  for(int i = 0; i < num_values; i++)
  {
    count = 1;
    for(int j = i + 1; j < num_values; j++)
    {
        if(values[i] == values[j])
        {
          count++;
        }
    if(count > oldcount)
    {
      mode = values[i];
      oldcount = count;
    }
    }
  return mode;
  }
}

float CalculateMean(int values[], int num_values)
{
  float sum = 0;

  for(int i = 0; i < num_values; i++)
  {
    sum += values[i];
  }
  return sum / num_values;
}