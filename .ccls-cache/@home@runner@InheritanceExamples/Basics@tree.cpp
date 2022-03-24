// C++ program to implement
// Hierarchical Inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};


// first sub class
class Car: public Vehicle
{
public:
  Car(){
    cout<<"This is a car\n";
  }
};

// second sub class
class Bus: public Vehicle
{
public:
	Bus(){
    cout<<"This is a bus\n";
  }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Car obj1;
	Bus obj2;
	return 0;
}

