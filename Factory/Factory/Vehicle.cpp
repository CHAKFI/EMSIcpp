#include "Vehicle.h"
#include <iostream>
using namespace std;

//Default Constructor
Vehicle::Vehicle()
{
	this->type = "-";
	this->brand = "-";
	this->model = "-";
	this->reg_number = 0;
	this->price = 0;

	cout << "\n\n You have called Default Constructor :\n";
}

//Initialization Constructor
Vehicle::Vehicle(string tp, string brd, string md, int id, double prc)
{

	this->type = tp;
	this->brand = brd;
	this->model = md;
	this->reg_number = id;
	this->price = prc;

	cout << "\n\n You have called Initialization Constructor :\n";
}

//Copy Constructor
Vehicle::Vehicle(const Vehicle& o)
{
	this->type = o.type;
	this->brand = o.brand;
	this->model = o.model;
	this->reg_number = o.reg_number;
	this->price = o.price;

	cout << "\n\n You have called Copy Constructor :\n";
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
	cout << "\n\n Please insert the type : ";

	cout << "Please insert the brand : ";

	cout << " Please insert the model : ";

	cout << "Please insert the Registration number : ";

	cout << "Please insert the price : ";

}

Vehicle::~Vehicle()
{   
	cout << "\n\n You have called Distructor :";
	delete this;
	
}
