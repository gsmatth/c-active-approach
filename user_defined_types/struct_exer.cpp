#include <iostream>
#include <iomanip>
#include <fstream>
#include <ios>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::stoi;

using std::ifstream;
using std::ofstream;

const int STUDENT_NUMBER = 5;

struct Person 
{
  char  fname[25];
  int   age;
  char  gender;
};

void EditPersonFile();
void ReadData(Person * student_pointer, int num_of_records_to_read);
void DisplayOneStudent( Person student);
void EditRef(Person & student);
void EditPointer(Person * student);


int main()
{


EditPersonFile();
Person student_array[STUDENT_NUMBER];
Person * student_ptr = student_array;
ReadData(student_ptr,STUDENT_NUMBER);

for(int i = 0; i < 5; i++)
{
  DisplayOneStudent( student_array[i]);
}

EditRef(student_array[0]);
EditPointer(student_ptr);



return 0;
}



/*****************************************************************************
 * Name:  EditPersonFile
 * 
 * Parameters: none
 * 
 * Return: none
 * 
 * Purpose:  This function adds student records to the person_data.tx file.  The records are appended to the end of the file. The number of records created each time this function is called is determined by the user at time of entry.
 * **************************************************************************/

void EditPersonFile()
{
  ofstream editpersonfile;
  editpersonfile.open("./text/person2_data.txt", ios::app);

  Person student;
  bool create_another_student = '\0';

  if(editpersonfile.is_open())
  {
    do
    {
      char again = 'N';

      cout << "Enter age: ";
      cin >> student.age;
      cout << "Enter first name: ";
      cin >> student.fname;
      cout << "Enter your gender (F/M): ";
      cin >> student.gender;

      editpersonfile << student.fname << ' ' << student.age << ' ' 
                      << student.gender << endl;

      cout << "Do you want to enter data for another student(Y/N): ";
      cin >> again;

      if(toupper(again) == 'Y')
      {
        create_another_student = true;
      }
      else
      {
        create_another_student = false;
      }    

    } while (create_another_student);

    editpersonfile.close();
  } 
  else 
 {
   cout << "person_data is not open for editing" << endl;
 }
}


/*****************************************************************************
 * Name:  ReadData
 * 
 * Parameters: pointer to array of Person structs, int num_of_records_read
 * 
 * Return: none
 * 
 * Purpose:  This function reads the student records from the person_data.tx file.  The records are used to populate the array of structures passed in as  pointer to this function. The number of records read is defined by the second parameter passed in.
 * **************************************************************************/
void ReadData(Person * student_pointer, const int num_of_records_to_read)
{

  char temp_cstring[32];
  ifstream data_file("./text/person2_data.txt");

  if(data_file.is_open())
  {
    //if I place this int declaration at the top of this function, it gets changed to very large number after getline() runs.  WHY?????
    int num_records_read = 0;

    while(!data_file.eof() && num_records_read < num_of_records_to_read)
    {
      data_file.getline(temp_cstring, 32);
      cout << "The output from getline: " << temp_cstring << endl;

      //tokenize the contents saved from getline
      char * token_ptr;
      token_ptr = strtok(temp_cstring, " ");
      cout << "initial value of token_ptr: " << token_ptr << endl;
      int counter = 0;

      while(token_ptr != NULL  && counter < 3)
      { 
        switch(counter)
      {
        case 0:
          strcpy(student_pointer[num_records_read].fname, token_ptr);
          counter ++;
          token_ptr = strtok(NULL, " ");
          cout << "the value of token_ptr in case 0: " << token_ptr << endl;
          break;

        case 1:
          student_pointer[num_records_read].age = stoi(token_ptr);
          counter ++;
          token_ptr = strtok(NULL, " "); 
          cout << "the value of token_ptr in case 1: " << token_ptr << endl; 
          break;

        case 2:
          student_pointer[num_records_read].gender =  * token_ptr; 
          counter ++;
          cout << "the value of token_ptr in case 2: " << token_ptr << endl; 
          break;

        default:
          cout << "TokenizeStudentString failed all case statements" << endl;
          break;
       }
      }

      num_records_read++; 
    
    } 
  }
}

/*****************************************************************************
 * Name:  DisplayOneStudent
 * 
 * Parameters: Value representing one element of array
 * 
 * Return: none
 * 
 * Purpose:  This function displays the values of the element passed in as parameter to the screen
 * **************************************************************************/
void DisplayOneStudent( Person student)
{
  cout << "Name: " << student.fname  << '\t'
        <<"Age: " << student.age << '\t'
        <<"Gender: " << student.gender 
        << endl;
};



/*****************************************************************************
 * Name:  EditRef
 * 
 * Parameters: student elment/structure passed in by reference
 * 
 * Return: none
 * 
 * Purpose:  allow user to edit information in the structure
 * **************************************************************************/

void EditRef(Person & student)
{
  char update_value = 'N';

  cout << "The current student data is as follows:  \n"
        << "Name: \t\t"  << student.fname << '\n'
        << "Age: \t\t"  << student.age << '\n'
        << "Gender: \t\t" << student.gender << endl;

  
  cout << "Do you want to update the students name (Y/N): ";
  cin >> update_value;
  if(toupper(update_value) == 'Y')
  {
    cout << "Enter new name:  ";
    cin >> student.fname;
  }

  cout << "Do you want to update the students age (Y/N): ";
  cin >> update_value;
  if(toupper(update_value) == 'Y')
  {
    cout << "Enter new age:  ";
    cin >> student.age;
  }

  cout << "Do you want to update the students gender(Y/N): ";
  cin >> update_value;
  if(toupper(update_value) == 'Y')
  {
    cout << "Enter new gender(F/M):  ";
    cin >> student.gender;
  }

  cout << "The updated student data is as follows:  \n"
        << "Name: \t\t"  << student.fname << '\n'
        << "Age: \t\t"  << student.age << '\n'
        << "Gender: \t\t" << student.gender << endl;
}



/*****************************************************************************
 * Name:  EditPointer
 * 
 * Parameters: student elment/structure passed in by pointer
 * 
 * Return: none
 * 
 * Purpose:  allow user to edit information in a student structure
 * **************************************************************************/

void EditPointer(Person * student)
{
  char update_value = 'N';

  cout << "The current student data is as follows:  \n"
        //  use arrow operator to access the data member from struct pointer
        << "Name: \t\t"  << student->fname << '\n'
        << "Age: \t\t"  << student->age << '\n'
        << "Gender: \t\t" << student->gender << endl;

  
  cout << "Do you want to update the students name (Y/N): ";
  cin >> update_value;
  if(toupper(update_value) == 'Y')
  {
    cout << "Enter new name:  ";
    cin >> student->fname;
  }

  cout << "Do you want to update the students age (Y/N): ";
  cin >> update_value;
  if(toupper(update_value) == 'Y')
  {
    cout << "Enter new age:  ";
    cin >> student->age;
  }

  cout << "Do you want to update the students gender(Y/N): ";
  cin >> update_value;
  if(toupper(update_value) == 'Y')
  {
    cout << "Enter new gender(F/M):  ";
    cin >> student->gender;
  }

  cout << "The updated student data is as follows:  \n"
        << "Name: \t\t"  << student->fname << '\n'
        << "Age: \t\t"  << student->age << '\n'
        << "Gender: \t\t" << student->gender << endl;

}

