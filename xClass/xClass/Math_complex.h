#pragma once
#include<iostream>
#include<string>

using namespace std;

class Math_complex
{
	double im;
	double re;

 public:

	   Math_complex(double, double);
	   Math_complex(const Math_complex &obj);
	   Math_complex module(const Math_complex &obj);
	   Math_complex conjugue(const Math_complex& obj);
	   void Display();
 





};

