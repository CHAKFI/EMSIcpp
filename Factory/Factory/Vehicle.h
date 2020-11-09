#pragma once
#include <string>
using namespace std;


class Vehicle
{
	//attributes
		string type;
		string brand;
		string model;
		int reg_number;
		double price;

public : 
	
	//Default Constructor
	  Vehicle();

	//Initialization Constructor
	  Vehicle(string, string, string, int, double);

	//Copy Constructor
	  Vehicle(const Vehicle &o);

	//Display Method
	  void Display();
    
    //Insert Method
	  void Insert();

    //Destructor
	  ~Vehicle();


};

