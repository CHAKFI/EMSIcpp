// Factory.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//by CHAKFI AHMED 
//GITHUB : https://github.com/CHAKFI
//LINKEDIN :https://www.linkedin.com/in/chakfi-ahmed/


#include<iostream>
#include<string.h>
#include "Vehicle.h"

using namespace std;

int main()
{
	// Using Default Constructor
	Vehicle obj;
	obj.Display();

	// static creation of object using Initialization Constructor
	Vehicle obj1("4x4","BMW","X5", 635846, 412.999);
	obj1.Display();

	// Using Copy Constructor
	Vehicle obj2 = obj1;
	obj2.Display();

	


}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

