#include <iostream>
#include <string>
#include "Engine.cpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;


//----Classes are defined before main---------------------------------//
//--------------------Class Definition Begins---------------------------//
  // class Engine
  // {
  //   public:
  //     Engine(int cyl, float displace, char manf[], FuelType fuel);
  //     void Start();

  //     //A setter is a member function that is passed a parameter, which will then be assigned to a specific data member.
  //     void SetCylinders(unsigned short cylinders);


  //      //A getter is a member function that returns the value of a specific data member
  //     unsigned short GetCylinders();

  //   private:
  //     void HeatGlowPlugs();
  //     void SendPowerToStarter();

  //     unsigned short m_cylinders;
  //     float m_displacement;
  //     char m_manufacturer[35];
  //     FuelType m_fuel;

  // };

  //--------------------Class Definition Ends---------------------------//


  /*
  method defined outside of class definition to make it more readable;
  we use the binary scope resolution operator (::) to specify that the Start method belongs to the Engine class
  */

  // void Engine::HeatGlowPlugs()
  // {
  //   cout<<"glow plug" << endl;
  // };
  // void Engine::SendPowerToStarter()
  // {
  //   cout << "power to starter" << endl;
  // };

  // void Engine::Start()
  // {
  //   if(m_fuel == DIESEL)
  //   {
  //     HeatGlowPlugs();
  //   }
    
  //   SendPowerToStarter();
  // }

  // //setter
  // void Engine::SetCylinders(unsigned short cylinders)
  // {
  //   m_cylinders = cylinders;
  // }

  // //getter
  // unsigned short Engine::GetCylinders()
  // {
  //   return m_cylinders;
  // };


//-----------------------Class Constructor Overloading Starts-----------------//
// constructor prototype added to class definition above also
// Engine::Engine(int cyl, float displace, char manf[], FuelType fuel)
// {
//   m_cylinders = cyl;
//   m_displacement = displace;
//   strcpy(m_manufacturer, manf);
//   m_fuel = fuel;
// }



//-----------------------Class Constructor Overloading Ends-----------------//



  // //Each of these objects below has their own copy of the data members specified in the class definition. The methods of the class, however, are shared among all of its objects.

  

//-----------------------Amother example class----------------------//
class Person 
{
  public:
    void SetId(int);
    int GetId();
    void SetGender(char);
    char GetGender();

  private:
    int   id;
    char  gender;
  
  
};

void Person::SetId(int id)
{
  id = id;
}

void Person::SetGender(char gender)
{
  gender = gender;
}

int Person::GetId()
{
  return id;
}

char Person::GetGender()
{
  return gender;
}



class Sample 
{
  public:
    Sample();
    Sample(short int age, float shoe_size);
    ~Sample();
    short int GetAge()
    {
      return m_age;
    };
     float GetShoeSize()
    {
      return m_shoe_size;
    };

  private:
    short int m_age;
    float m_shoe_size;
};

Sample::Sample()
{

}

Sample::Sample(short int age, float shoe_size)
{
  cout << "The Sample constructor has been called" << endl;
  m_age = age;
  m_shoe_size = shoe_size;
}

//really not needed, just added to show when it is called automatically
Sample::~Sample()
{
  cout << "Sample destructor called" << endl;
}




int main()
{
  //using the string class to create string objects
  string full_name;
  string fname  = "Tim";
  string lname("Wheeler");
  string students[25];
 


  cout << "Enter your full name: ";
  cin.ignore(cin.rdbuf()->in_avail());
  //the first argument is the stream to read the data from
  //the second parameter is the string OBJECT to write to
  getline(cin, full_name);

  cout << "The value of full_name: " << full_name << endl;

  string test = full_name;
  cout << "test: " << test << endl;
  cout << "first character in test: " << test[0] << endl;
  cout << "length of test: " << test.length() << endl;

  // Engine V8;
  // Engine * V6_ptr = new Engine;
  // Engine assembly_line[35];
  Engine V12 (12, 6.7, "Big Block", GASOLINE);
  cout << "cylinders of V12: " << V12.GetCylinders() << endl;

  Sample s1;
  cout << "The age of s1 is: " << s1.GetAge() << endl;

  Sample deca_sample[10];
  cout << "The age of the second Sample in Array is: " << deca_sample[1].GetAge() << endl;


 Sample * dyna_alloc_sample = new Sample;
 cout << "Address of dyna_alloc_sample: " << & dyna_alloc_sample << endl;
 cout << "The age of the second Sample in Array is: " << 
 
 dyna_alloc_sample->GetAge() << endl;

 Sample overload_constructor_example = Sample(46, 8.5);
 cout << "sample age: " <<overload_constructor_example.GetAge() <<'\t'
      <<"sample shoe size: " << overload_constructor_example.GetShoeSize() << endl;


 delete dyna_alloc_sample;
 cout << "Address of dyna_alloc_sample: " << & dyna_alloc_sample << endl;

Sample penta_sample[5];
 for(int i = 0; i < 5; i++){
   penta_sample[i] = Sample(( i + 54), ( i + 3.5));
 }

 for(int i = 0; i < 5; i++)
 {
   cout <<"sample age" << penta_sample[i].GetAge() <<'\t' 
        <<"sample shoe size: " <<penta_sample[i].GetShoeSize() << endl;
 }

  return 0;
}


