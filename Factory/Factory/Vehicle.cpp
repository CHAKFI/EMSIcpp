#include "Vehicle.h"
#include <iostream>
using namespace std;


//initialization Constructor
Vehicle::Vehicle(string tp, string brd, string md, int id, double prc)
{

	this->type = tp;
	this->brand = brd;
	this->model = md;
	this->reg_number = id;
	this->price = prc;

	cout << "You have called initialization Constructor : \n\n";
}

//Copy Constructor
Vehicle::Vehicle(const Vehicle& o)
{
}


//Display Method
void Vehicle::Display()
{
	cout << "\t\t---------------------------------------------" << endl;
	cout << "\t\t|              Technical sheet:              " << endl;
	cout << "\t\t---------------------------------------------" << endl;
	cout << "\t\t|  Type : "<< type<<"                        " << endl;
	cout << "\t\t---------------------------------------------" << endl;
	cout << "\t\t|  Brand: "<< brand<<"                       " << endl;
	cout << "\t\t---------------------------------------------" << endl;
	cout << "\t\t|  Model: "<< model<<"                       " << endl;
	cout << "\t\t---------------------------------------------" << endl;
	cout << "\t\t|  Registration number : " << reg_number       << endl;
	cout << "\t\t---------------------------------------------" << endl;
	cout << "\t\t|  Price : " << price <<" MAD                " << endl;
	cout << "\t\t---------------------------------------------" << endl;

}

//Insert Method
void Vehicle::Insert()
{
}
