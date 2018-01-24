#include "Person.h"
#include <string>
#include <iostream>

Person::Person(string fn, string ln, int ag): FName(fn),LName(ln),age(ag)
{
    cout<<"Constructing "<<FName<<"  " <<LName<<endl;
}

Person::~Person()
{
     cout<<"Desstructing "<<FName<<"  " <<LName<<endl;
}
