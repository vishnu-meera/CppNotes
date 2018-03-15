#pragma once
#include "Person.h"
#include <string>
using std::string;

class Bloger :
	public Person
{
	string BlogName;
public:
	Bloger(string firstname, string lastname, int age, string blog);
	~Bloger();
	string Getname() const { return Person::Getname() + " #" + BlogName; };
	void SetBlogName(string blog) { BlogName = blog; };
};

