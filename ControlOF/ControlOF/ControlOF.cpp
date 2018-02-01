// ControlOF.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Utlity.h"

using std::cout;
using std::cin;
using std::endl;

void IsPrime(int num);

int main()
{
	int number;
	cout << "Enter the number" << endl;
	cin >> number;

	Utlity newUtlity;

	true == newUtlity.IsPrime(number) ? cout << number << " is prime." << endl : cout << number << " is prime." << endl;

	true == newUtlity.Is2MorPrime(number) ? cout << number << " + 2 is prime." << endl : cout << number << " + 2 is prime." << endl;

    return 0;
}

