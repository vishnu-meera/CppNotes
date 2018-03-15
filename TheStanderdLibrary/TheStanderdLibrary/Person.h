#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Person
{
	string fname;
	string lname;
	int age;
public:
	Person(string fn, string ln, int a);
	~Person();
	string Getname()const;
	int GetAge()const { return age; };
};

