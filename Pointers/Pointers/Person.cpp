#include "stdafx.h"
#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(string fname, string lname, int salary) :fname(fname), lname(lname), salary(salary)	//for raw pointer, pR(nullptr)
{
	//cout << "constructing Person " << GetName() << endl;
}

//for raw pointer
//Person::~Person()
//{
//	//cout << "destructing Person " << GetName() << endl;
//	delete pR;
//	//delete pR;
//	//cout << "deleted Resource Pointer" << GetName() << endl;
//}

//For raw pointer
//Person::Person(const Person& p):fname(p.fname),lname(p.lname),
//				salary(p.salary),pR(new Resource(p.pR->Getname()))
//{
//}


void Person::SetName(string s, string y)
{
	fname = s;
	lname = y;
}

int Person::AddSalary(int amount) {
	salary += amount;
	return salary;
}

void Person::AddResource()
{
	//for raw pointer
	//delete pR;
	pR.reset();
	pR = std::make_shared<Resource>(GetName());
}
//for raw pointer
//Person& Person::operator=(const Person & p)
//{
//	fname = p.fname;
//	lname = p.lname;
//	salary = p.salary;
//	delete pR;
//	pR = new Resource(p.pR->Getname());
//
//	return *this;
//}
