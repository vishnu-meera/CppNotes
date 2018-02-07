// Overload.cpp : Defines the entry point for	the console application.
//

#include "stdafx.h"
#include <iostream> 
#include "classOverload.h"
#include "Accumulator.h"

using namespace std;

template <class T>
T max(T& t1, T& t2) 
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	classOverload obj("Vishnu", "Sankar", 29);
	classOverload obj1("Meera", "Raveendran", 30);
	if (obj > obj1)
		cout << obj.Getname() + " older than " + obj1.Getname() << endl;
	else
		cout << obj1.Getname() + " older than " + obj.Getname() << endl;

	int a = 33, b = 41;
	cout << "Max of 33 and 34 is " << max(a,b) << endl;

	Accum <double> dNtotal(0.0);
	dNtotal += 8.4;
	dNtotal += 7.6;
	cout << dNtotal.GetTotal() << endl;


	Accum <string> fullName("");
	fullName += "Meera";
	fullName += " ";
	fullName += "Vishnu.";
	cout << fullName.GetTotal() << endl;

	classOverload Meera("Maalu", "Nandu", 29);
	classOverload Vishnu("Nandu", "Maalu", 30);

	Accum<classOverload> people(0);

	people += Meera;
	people += Vishnu;

	cout << people.GetTotal()<<endl;

    return 0;
}

