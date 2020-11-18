#include "Math_complex.h"


Math_complex::Math_complex(double r, double i)
{
	cout << "Constructeur d'initialisation: \n";
	this->re = r;
	this->im = i;
}



Math_complex::Math_complex(const Math_complex& obj)
{
	this->re = obj.re;
	this->im = obj.im;
}

Math_complex Math_complex::module(const Math_complex& obj)
{

	return Math_complex();
}

Math_complex Math_complex::conjugue(const Math_complex& obj)
{
	return Math_complex();
}

void Math_complex::Display()
{
	cout << re << " + " << im << "i \n";
}
