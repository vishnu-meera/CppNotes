#pragma once
#include<string>
#include "Resource.h"
#include <memory>

using std::string;
using std::shared_ptr;

class Person
{
	string fname;
	string lname;
	int salary;
	//using raw pointer
	//Resource* pR;
	//using shared pointer
	shared_ptr<Resource> pR;
public:
	Person(string fname,string lname, int salary);
	//for raw pointer
	//~Person();
	//for raw pointer
	//Person(const Person& p);
	void SetName(string s, string y);
	string GetName(void) const { return fname + " " + lname; };
	int AddSalary(int amount);
	void AddResource();
	string GetResourceName() const { return pR->Getname(); };
	//for raw pointer
	//Person& operator=(const Person& p);
};

