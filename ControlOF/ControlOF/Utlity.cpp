#include "stdafx.h"
#include "Utlity.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Utlity::Utlity()
{
}


Utlity::~Utlity()
{
}

bool Utlity::IsPrime(int num)
{
	int factor = 0;
	bool prime = true;
	for (int i = 2; i <= num / i; i = i + 1) {
		factor = num / i;
		if (factor*i == num) {
			prime = false;
			break;
		}
	}
	return prime;
}

bool Utlity::Is2MorPrime(int& num)
{
	return Utlity::IsPrime(num + 2);
}
