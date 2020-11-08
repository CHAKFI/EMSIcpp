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
	
	//initialization Constructor
	  Vehicle(string, string, string, int, double);

	//Copy Constructor
	 // Vehicle(const &o);
    
	 // Display Method
	  void Display();
    
	  //Fill in the informations Method
	  void Grab();




};

