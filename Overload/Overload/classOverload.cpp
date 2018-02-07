#include "stdafx.h"
#include "classOverload.h"


classOverload::classOverload(string fname, string lname, int age) : fname(fname), lname(lname), age(age)
{
}

classOverload::~classOverload()
{
}

bool classOverload::operator>(classOverload& obj)
{
	return age > obj.age;
}

bool classOverload::operator>(int i)
{
	return age>i;
}
