#pragma once
#include <string>
using namespace std;


class Vehicle
{
	//attributes
		string type;
		string brind;
		string model;
		int reg_number;
		double price;

public : 
	
	//initialization Constructor
	  Vehicle(string, string, string, int, double);

	//Copy Constructor
	 // Vehicle(const *obj);
    // Display Method
	  void Display();





};

