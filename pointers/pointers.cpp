#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;


void GetFraction(int * numerator, int * denominator);
void FormatNegative(int * numerator, int * denominator);
void DisplayFraction( int numerator, int denominator);
void PointerMath();
void DisplayArrayContent(int rows, int columns);
void DeleteCStringSection(char * cStringArray, int start_index, int num_char_to_delete);
int CharAt(char * str, char ch);

int main(){

float average = 20.0F;
float * flt_ptr = &average;
//declaring and initializing a null pointer
float * flt_null_ptr = nullptr;
float ** flt_ptr_ptr = &flt_ptr;

cout << "average: " << average <<endl;//20
cout << "flt_ptr: " << flt_ptr << endl;//0x7ffeefbffaa8
cout << "*flt_ptr: " << *flt_ptr << endl;//20
cout << "flt_ptr_ptr: " << flt_ptr_ptr << endl;//0x7ffeefbffaa0
cout << "*flt_ptr_ptr: " << *flt_ptr_ptr << endl;//0x7ffeefbffaa8
cout << "**flt_ptr_ptr: " << **flt_ptr_ptr << endl;//20


int numbers[5] = {99, 34, 1, 88, 100};
int * int_ptr = numbers;
int ** int_ptr_ptr = &int_ptr;

cout << "The address of numbers array is: " << &numbers << endl;// 0x7ffeefbffa90
cout << "The address of the numbers array is: " << int_ptr << endl;//0x7ffeefbffa90
cout  << "The address of the numbers array is: " << *int_ptr_ptr << endl;//0x7ffeefbffa90
cout << "The address of int_ptr is: " << &int_ptr << endl;//0x7ffeefbffa68
cout << "The address of the int_ptr: " << int_ptr_ptr << endl;//0x7ffeefbffa68
cout << "The first element of number array: " << *int_ptr << endl;//99
cout << "The first element of the number array: " << **int_ptr_ptr << endl;//99
int_ptr = &numbers[1];
cout << "The second element of the numbers array: " << *int_ptr << endl;//34
cout << "The second element of the numbers array: " <<  **int_ptr_ptr << endl;//34
cout << "The address of int_ptr_ptr (not address stored in pointer): "  << &int_ptr_ptr << endl;//0x7ffeefbffa60

int_ptr = &numbers[0];
* int_ptr = 100;

cout << "The first element of number array should be 100: " << int_ptr[0] << endl;//100

int_ptr = &numbers[1];
* int_ptr = 102;
cout << "The second element of number array should be 102: " << * int_ptr << endl;//102
cout << "The address of int_ptr is: " << &int_ptr << endl;//0x7ffeefbffa68

** int_ptr_ptr = 104;
cout << "The second element of number array should be 104: " << **int_ptr_ptr << endl;//104

* int_ptr_ptr = &numbers[2];//change address stored IN int_ptr

cout << "address of numbers[2]: " << &numbers[2] << endl;//0x7ffeefbffa98
cout << "address stored in int_ptr: " << int_ptr << endl;//0x7ffeefbffa98



int numerator = 0, denominator = 0;
GetFraction(&numerator, &denominator);
PointerMath();
DisplayArrayContent(4,6);

//-----------------------Pointer Math------------------------------------//

char test_string[50] = "this is the initialized cString";
char * test_ptr = test_string; 
cout << "This is test_string before DeleteCStringSectionfunction is called: " << test_string << endl;

DeleteCStringSection(test_ptr, 0, 6);

cout << "This is test_string after copy: " << test_string << endl;

int char_at = CharAt(test_ptr, 'c');
cout << "The charAt output is: " << char_at << endl;
return 0;
}


/*
The function call passes the two addresses of integers; therefore, we need to catch these addresses in variables that can hold addresses: pointers
*/
void GetFraction(int * numerator, int * denominator)
{
  cout << "Enter a numerator: " ;
  cin >> * numerator;

  cout << "Enter a denominator: ";
  cin >> * denominator;

 FormatNegative(numerator, denominator);//passing pointer
 DisplayFraction(* numerator, * denominator);//passing value

}

void FormatNegative(int * numerator, int * denominator)
{
  if( * numerator < 0 && * denominator < 0)
  {
    * numerator = abs(* numerator);
    * denominator = abs(* denominator);
  }
  else if (* denominator < 0)
  {
    * denominator = abs(* denominator);
    * numerator *= -1;
  }
  
}

void DisplayFraction( int numerator, int denominator)
{
  cout << numerator << '/' << denominator << endl;
}

void PointerMath(){
  int nums[10] = {0,1,2,3,4,5,6,7,8,9};
  int * ptr = nums;

  for(int i = 0; i < 3; i++ , ptr++ )
  {
    cout << "first for loop  " <<  * ptr << ", " << endl;//0,1,2
  }

  for(int i = 0; i < 3; i++)
  {
    cout << "second for loop " << * ptr++ << ", ";//3,4,5(plus an increment)
  }
  cout << endl;

  cout << *(ptr + 1) << endl;//7
  cout << (ptr += 1) << endl;//0x7ffeefbff97c (where value of 7 is stored)

}

/*
Write a program that declares a two-dimensional array of integers with four rows and five columns. Initialize the array to any numbers of your choosing. Using a pointer, display the contents of the array.
*/

void DisplayArrayContent(int rows, int columns)
{

  int intArray[rows][columns];

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++)
    {
      intArray[i][j] = (i + j) + 5;
    }
  }

  for(int i = 0; i < rows; i++)
  {
     int * array_row = intArray[i];

    for(int j = 0; j < columns; j++)
    {
      cout << *(array_row + j) << ", ";
    }
    cout << endl;
  }
   
  
}

void DeleteCStringSection(char * cStringArray, int start_index, int num_char_to_delete)
{
/*
second argument to strcpy is the cString source that will be copied to the array defined by the first argument, overwritign any previous content in the array.  We are completely overwriting the same cString (first argument) with part of the same cString (second argument)
*/
strcpy(cStringArray + start_index, cStringArray + start_index + num_char_to_delete);

}

int CharAt(char * str, char ch)
{
  char * cur = str;
  int return_value = -1;

  while(* cur != '\0' && * cur != ch)
  {
    cur++;
  }
  if(* cur != '\0')
  {
    return_value = static_cast<int> (cur - str);
  }
  return return_value;
}



