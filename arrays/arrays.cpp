#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
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

const int NUMBER_OF_STUDENTS = 10;
int test_scores[NUMBER_OF_STUDENTS] = {0};
char test_grades[NUMBER_OF_STUDENTS];
float sum = 0;

int counter = 0, a_students = 0, b_students = 0, c_students = 0, d_students = 0, f_students =0;
char again = '\0';

do
{
  cout << "Enter a test grade: ";
  cin >> test_scores[counter];
  counter++;

  cout << "Do you wish to enter another grade (Y/N): ";
  cin >> again; 
  
} while (toupper(again) == 'Y' && counter <= NUMBER_OF_STUDENTS);

for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
{
  if(test_scores[i])
  {
    sum += test_scores[i];
  }
}

for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
{
  if(test_scores[i])
  {
     if(test_scores[i] >= 92.0)
    {
      test_grades[i] = 'A';
      a_students++;

    } else if(test_scores[i] >= 84.0)
    {
      test_grades[i] = 'B';
      b_students++;
    } else if(test_scores[i] >= 75.0)
    {
      test_grades[i] = 'C';
      c_students++;
    } else if(test_scores[i] >= 65.0)
    {
      test_grades[i] = 'D';
      d_students++;
    } else 
    {
      test_grades[i] = 'F';
      f_students++;
    }
  } else;
}

for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
{
  if(test_scores[i])
  {
    cout << "Student #" << i + 1 << " score is: " << test_scores[i] 
        << " or grade: " << test_grades[i] << endl; 
  }
  
}
cout << "# of A students: " << a_students << endl;
cout << "# of B students: " << b_students << endl;
cout << "# of C students: " << c_students << endl;
cout << "# of D students: " << d_students << endl;
cout << "# of F students: " << f_students << endl;

cout << "The average score for all students was: " << sum / counter << endl;
  return 0;
}