#include <iostream>
#include <string>
using namespace std;

class Car
{
  int Vn;
  string name;
  
  public:
  void details()
  {
      cout << "The name of the car is"<<" " << name << endl;
      cout <<"The vehicle number is" << " " << Vn<< endl;

  }
    /*Car(){
     cout << "In the Default constructor" << endl;
    name = "NONE";
      Vn = 0;
  } */
      //Constructor initailzation list
/*
  Car(string s, int v):name{s}, Vn{v}{
      cout << "In the constructor" << endl;
  }
  // Delegating constructor
  Car():Car{"NONE",0}{
     cout << "In the no args constructor" << endl;
      } */
      
 // Default constructor
   Car(string s = "NONE", int v = 0):name{s}, Vn{v}{
      cout << "In the Default constructor" << endl;
  }
  ~Car(){
      cout << "the object is destroyed" << endl;
  }
};

int main()
{ 
    cout<< "In the main" << endl;
   {
    cout<<"The first object"<< endl;
    Car c1{"Benz",504};
    c1.details();
}
{
    cout<<"The second object"<< endl;
    Car c2{"BMW"};
    c2.details();    
}
{
    cout<<"The third object"<< endl;
    Car c3;
    c3.details();    
}
cout << "Program end" <<endl;
    return 0;
}
