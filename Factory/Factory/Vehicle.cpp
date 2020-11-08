#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string tp, string md, string brd, int id, double prc)
{
	this->type = tp;
	this->model = md;
	this->brind = brd;
	this->reg_number = id;
	this->price = prc;

	cout << "HHHHHH";

}

void Vehicle::Display()
{

}
