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

 // Default constructor
   Car(string s = "NONE", int v = 0):name{s}, Vn{v}{
      cout << "In the Default constructor" << endl;
  }
  // Copy constructor withour pointers
  Car(const Car &source){
      name = source.name;
      Vn = source.Vn;
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

    cout<<"The second object"<< endl;
    Car c2{c1};
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
