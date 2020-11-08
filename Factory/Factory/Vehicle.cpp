#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string tp, string brd, string md, int id, double prc)
{

	this->type = tp;
	this->brand = brd;
	this->model = md;
	this->reg_number = id;
	this->price = prc;

	cout << "You have called initialization Constructor : \n";
}

void Vehicle::Display()
{   
	cout << "Technical sheet: \n";
	cout << "------------------------------------------";
	cout << "/  Type : "<< type;
	cout << "------------------------------------------";
	cout << "/  Brand: "<< brand;
	cout << "------------------------------------------";
	cout << "/  Model: "<< model;
	cout << "------------------------------------------";
	cout << "/  Registration number : " << reg_number;
	cout << "------------------------------------------";
	cout << "/  Price : " << price;
	cout << "------------------------------------------";

}

void Vehicle::Grab()
{
}
