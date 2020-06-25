#include <iostream>
#include <cstring>
#include <cstdlib> //for qsort function

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;



void GetFraction(int * numerator, int * denominator);
void FormatNegative(int * numerator, int * denominator);
void DisplayFraction( int numerator, int denominator);
void PointerMath();
void DisplayArrayContent(int rows, int columns);
void DeleteCStringSection(char * cStringArray, int start_index, int num_char_to_delete);
int CharAt(char * str, char ch);
void StringTokSample();
void StringInString();
void CharInString();
void GetString(char *& strA);
int compare_ints(const void * arg1, const void * arg2);
int compare_strs(const void * arg1, const void * arg2);




const int BUFFER_LENGTH = 256;

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
// GetFraction(&numerator, &denominator);
// PointerMath();
// DisplayArrayContent(4,6);

//-----------------------Pointer Math Begin------------------------------------//

// char test_string[50] = "this is the initialized cString";
// char * test_ptr = test_string; 
// cout << "This is test_string before DeleteCStringSectionfunction is called: " << test_string << endl;

// DeleteCStringSection(test_ptr, 0, 6);

// cout << "This is test_string after copy: " << test_string << endl;

// int char_at = CharAt(test_ptr, 'c');
// cout << "The charAt output is: " << char_at << endl;


//-----------------------Pointer Math End------------------------------------//



//------------------------cString Functions Begin-----------------------------//
// StringTokSample();
// StringInString();
// CharInString();
//-------------------------cString Functions End-----------------------------//


//-------------------------Dynamic Memory Allocation Begins------------------//
// syntax    <target-type> * <ptr-name> = new <target-type>;
//declare but do not initialize
int * ptr1 = new int;
//declare and initialize
char * ch_ptr = new char('A');
//initialize double with default value of 0;
double * average_double = new double();
//deallocate so there are no memory leaks
delete ch_ptr;
delete average_double;

//dynamically allocate an array. you can't initialize an array in the new statement
int number_elements = 10;
char * str = new char[number_elements];
delete [] str;
/*
allocates an array of 15 character pointers. Notice that the address returned is an address of an address of a character. 
*/
char ** star_star = new char * [15];



//----------------------Dynamic Memory Allocation Ends------------------------//

/*
You would want to pass a pointer by reference if you have a need to modify the pointer rather than the object that the pointer is pointing to.
*/

//null pointer
char * strA = nullptr;

cout << "address of strA in  main: " << &strA << endl;
//pass pointer as argument
GetString(strA);
cout << '\n' << strA << endl;
delete [] strA;


//-------------------Function Pointers---------------------------------------//
char * shrooms[10] =
{
  "Matsutake", "Lobster", "Oyster", "King Boletus",
  "Shaggy Mane", "Morel", "Chanterelle", "Calf Brain",
  "Pigs Ear", "Chicken of the Woods"
};

int nums[10] = {99, 43, 23, 100, 66, 12, 0, 125, 76, 2};

/*
qsort
    address of array
    number of elements
    size of each element
    the address of the compare function to use
*/
qsort( (void *)shrooms, 10, sizeof(char *), compare_strs);
qsort( (void *)nums, 10, sizeof( int *), compare_ints);

cout << "Size of int *:  " << sizeof(int *) << endl;

for(int i = 0; i < 10; i++)
{
  cout << shrooms[i] << " ," ;
}

cout << '\n\n';

for(int i = 0; i < 10; i++)
{
  cout << nums[1] << " ,";
}

cout << '\n';

return 0;
}

//-------------------------------------------------------------------------//
//-------------------------END MAIN----------------------------------------//
//-------------------------------------------------------------------------//





//---------------Begin Function Definitions Outside of Main----------------//
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

void StringTokSample()
{
  char textTitle[] = "C++: An Active Learning Approach";
  char * tokenPtr;

  cout << "Our string to be tokenized is: " << textTitle
  << "\n The Token/pieces are: \n";

  tokenPtr = strtok(textTitle, " ");

  while(tokenPtr != NULL)
  {
    cout << tokenPtr << '\n';
    tokenPtr = strtok(NULL," ");
  }
  cout << "\n After strtok, textTitle = " << textTitle
        <<endl;
}

void StringInString()
{
  char * ptr_ch;
  char str[] = "Hello World";

  cout << "Original string: " << str << endl;

  ptr_ch = strstr(str, "World");
  if(ptr_ch != NULL)
  {
    strncpy(ptr_ch, "Earth", 5);
    cout << "\n Modified cString: " << str << endl;
  }
  else
  {
    cout << "\n The search string is not in the original string \n";
  }
}

void CharInString()
{
  char * ptr_ch;
  char str[] = "C++ An Active Approach";
  cout << "Searching for all 'A' characters in " << str << endl;

  //find the first occurrence of  n
  ptr_ch = strchr(str, 'A');
  if(ptr_ch == NULL)
  {
    cout << "The character is not in the string \n";
  }
  //find remaining occurrences of n
  while(ptr_ch != NULL)
  {
    cout << "'A' found at " << ptr_ch - str + 1 << endl;
    ptr_ch = strchr(ptr_ch + 1, 'A');
  }
}

/*
Below, we are catching the address of the pointer, not the contents of the pointer (what it points to, which is nullptr).

You would want to pass a pointer by reference if you have a need to modify what the pointer points to rather than modifying the actual object that the pointer is pointing to when you start.

this function starts off with the strA pointing to a stack address (0x00007ffeefbffa20) even though it was initialized as nullptr.  By the end of the function, we have switched to point to a heap address (0x0000000100205290) and added characters as contents in the array stored in heap.  The address where the strA variable is stored is not changed.

char *& strA = the value of the first element in character array that strA points to


*/
void GetString(char *& strA)
{
  //declare a local array of characters with length of 256

 char buffer[BUFFER_LENGTH];

 cout << "Please enter a string: ";
/*
we flush the input buffer before and after our call to .getline. The first .ignore cleans the buffer prior to the .getline call. The second flush is used to clean any remaining characters in the buffer after the .getline function has executed.

the .ignore member function removes a certain number of characters from the keyboard/input buffer. Everything in the parentheses for the .ignore function call allows us to find the number of characters currently in the keyboard buffer:

  - rdbuf  returns a pointer to the stream buffer object currently associated with the stream (in this case "cin" or input buffer).

  - in-avail returns the number of characters available to read in the input buffer identified by rdbuf
*/

 cin.ignore(cin.rdbuf()->in_avail());
 cin.getline(buffer, BUFFER_LENGTH);

 /*
Although not intuitive, .getline sets a flag if it reads the maximum number of characters. If this happens, the .clear function call is required to reset any flags that may have been set by the .getline function.
 */
 cin.clear();
 cin.ignore(cin.rdbuf()->in_avail());
 cout << "Here is string entered: " << buffer << endl;

/*
new returns a pointer, thereby changing what strA pointer points to.
The expression uses dynamic memory allocation to create a character array of a specified size in the heap memory.
*/
strA = new char[strlen(buffer) + 1];

//now we copy the contents from buffer to the address that strA points to.
strcpy(strA, buffer);

}

int compare_ints(const void * arg1, const void * arg2)
{
  int return_value = 0;
  if( *(int *)arg1 < *(int *)arg2 )
    return_value = -1;
  else if(*(int *)arg1 > *(int *)arg2 )
    return_value =1;
  return return_value;
}

int compare_strs(const void * arg1, const void * arg2)
{

  return (strcmp ( *(char **) arg1, *(char **) arg2));
}



