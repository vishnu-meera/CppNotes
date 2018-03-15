#pragma once
#include <string>
using std::string;

class Person
{
	string fname;
	string lname;
	int age;
public:
	Person(string firstname,string lastname,int age);
	virtual ~Person();
	virtual string Getname() const { return fname + "  " + lname; };
	void SetFirstName(string firstname) { fname=firstname; }

};

