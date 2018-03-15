#include "stdafx.h"
#include "Person.h"


Person::Person(string fn, string ln, int a):fname(fn),lname(ln),age(a)
{
}


Person::~Person()
{
}

string Person::Getname() const
{
	return fname + " " + lname;
}
