#include <iostream>
#include <iomanip>
#include <fstream>
#include <ios>


using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::right;
using std::left;
using std::setw;

using std::ifstream;//input into the stream from the file: read from file
using std::ofstream;//output from the stream to the file: write to file

const int NAME_LENGTH = 16;
void PrintHeader(ofstream & report);
void PrintReport(char lname[][NAME_LENGTH], int salary[], int num_records);
void SortArray( int sortedarray[], int arraysize);


int main()
{

 

  ifstream readtextfile;
  readtextfile.open("./text/Sample.txt");
  if(readtextfile.is_open())
  {
    cout << "File opened" << endl;
    readtextfile.close();

  } else 
  {
    cout << "File not opended" << endl;
  }

ofstream edittextfile;//declare ofstream object

edittextfile.open("./text/Sample.txt", ios::app);
if(edittextfile.is_open())
{
  cout << "Edit text file is open" << endl;
  edittextfile.close();
} else
{
  cout << "edit text file NOT open" << endl;
}

edittextfile.open("./text/Sample.txt");
if(edittextfile.is_open())
{
  cout << "Sample.txt is opened for editing" << endl;
  edittextfile.close(); 
} else 
{
  cout << "Sample.txt is not open  for editing" << endl;
}



char lname[][NAME_LENGTH] = {
  {"billy"}, {"silly"}, {"Sammy"}, {"testname"}
};

int salary[] = {12000,14000, 16000, 18000};

int num_records = 4;

PrintReport(lname, salary, num_records);

int sortedarray[] = {12,4,3,2,1,5,33,100,21,6,7};

int arraysize = sizeof(sortedarray) / sizeof(sortedarray[0]);

SortArray(sortedarray, arraysize);

  return 0;
}


void PrintHeader(ofstream & report)
{
  cout << "entered PrintHeader" << endl;
  report << left << setw(NAME_LENGTH + 1) << "First Name"
        << right << setw(8) << "Salary" << endl;
}

void PrintReport(char lname[][NAME_LENGTH], int salary[], int num_records)
{
  ofstream report("./text/report.txt");
  if(report.is_open())
  {
    PrintHeader(report);

    for(int i = 0; i < num_records; i++)
    {
      report << left << setw( NAME_LENGTH + 1) << lname[i]
              << right << setw(8) << salary[i] << endl;
    }
    report.close();
  }  else 
  {
    cout << "Error:  Unable to open report file" << endl;
  }
}

int ReadData(char lname[][NAME_LENGTH], int salary[])
{
  int num_records = 0;
  ifstream data_file("./text/data.txt");
  if(data_file.is_open())
  {
    data_file >> lname[num_records] >> salary[num_records];
    while(!data_file.eof())
    {
      num_records++;
      data_file >> lname[num_records] >> salary[num_records];
    }
    data_file.close();
  }
  else 
  {
    cout << "Error: Unable to open data file." << endl;
  }
  return num_records;
}

void SortArray( int sortedarray[], int arraysize)
{
  int counter = 0;
  while(counter < arraysize)
  {
    for(int i = 0; i < (arraysize - 1); i++)
    {
      int temp;
      if(sortedarray[i] > sortedarray[i + 1])
      {
        temp = sortedarray[i];
        sortedarray[i] = sortedarray[i + 1];
        sortedarray[i + 1 ] = temp;
      }
    }
    counter++;
  }

}


