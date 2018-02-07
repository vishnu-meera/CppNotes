#pragma once
#include <string>
using std::string;

class Resource
{
	string name;
public:
	Resource(string name);
	~Resource();
	string Getname() const { return name; };
};

