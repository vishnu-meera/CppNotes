#include "stdafx.h"
#include "Resource.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Resource::Resource(std::string name):name(name)
{
	cout << "constructor resourse " << name << endl;
}

Resource::~Resource()
{
	cout << "destructor resourse " << name << endl;
}
