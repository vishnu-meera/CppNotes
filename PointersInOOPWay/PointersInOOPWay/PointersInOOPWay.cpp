// PointersInOOPWay.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::endl;
using std::cout;

typedef unsigned long DWORD;

int func(int* main_pointer) {

	int ret;
	int value = 0;
	int* local_pointer = &value;
	if (local_pointer < main_pointer)
		ret = -1;
	else
		ret = 1;
	return ret;
}
typedef int (*CHARGER)(int* i);

int main()
{
	//Exersise 1
	//int value;
	//int* value_pointer;

	//value = 10;
	//cout << "address of value : " << &value << endl;
	//value_pointer = &value;
	//cout << "address of value inside value_pointer : " << value_pointer << endl;
	//cout << "address of value_pointer : " << &value_pointer << endl;

	//Exercise 2
	int main_pointer = 0;
	CHARGER f = func;
	if (f(&main_pointer))
		cout << "high to down" << endl;
	else
		cout << "down to high" << endl;
    return 0;
}

