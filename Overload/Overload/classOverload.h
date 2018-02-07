#pragma once
#include <string>

using std::string;

class classOverload
{
	string fname;
	string lname;
	int age;

public:
	classOverload(string fname, string lname, int age);
	~classOverload();
	string Getname() { return fname + " " + lname; };
	int Getage() { return age; };
	bool operator>(classOverload& obj);
	bool operator>(int i);
};

