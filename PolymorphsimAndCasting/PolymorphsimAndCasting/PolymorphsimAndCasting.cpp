// PolymorphsimAndCasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bloger.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{	
	//Raw pointer and old ways ar
	//Person* p = new Person("Vishnu", "Sankar", 30);
	//shared_ptr<Person> p = make_shared<Person>("Vishnu", "Sankar", 30);
	
	auto p = make_shared<Person>("Vishnu", "Sankar", 30);
	auto b = make_shared<Bloger>("Meera", "Raveendran", 29,"medium");

	shared_ptr<Person> pb = b;

	cout << p->Getname() << endl;
	cout << b->Getname() << endl;
	cout << pb->Getname() << endl;

    return 0;
}

