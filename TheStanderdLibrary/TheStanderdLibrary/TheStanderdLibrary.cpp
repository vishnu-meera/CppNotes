// TheStanderdLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include "Person.h"
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

void print(int i) {
	cout << i << " ";
}

bool even(int i){
	return !(i % 2);
}

void HackerRank3(void) {
	int a; long b; char c; float d; double e;
	scanf_s("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
	printf("%d\n", a);
	printf("%ld\n", b);
	printf("%c\n", c);
	printf("%.3f\n", d);
	printf("%.9e\n", e);
}

void HackeRank4() {
	int a, b;
	cin >> a >> b;
	for (int n = a; n <= b; n++) {

		if (n > 9) {
			if (n % 2 == 0) {
				cout << "even" << endl;
			}
			else
				cout << "odd" << endl;
		}
		else {
			if (n == 1) {
				cout << "one" << endl;
			}
			else if (n == 2) {
				cout << "two" << endl;
			}
			else if (n == 3) {
				cout << "three" << endl;
			}
			else if (n == 4) {
				cout << "four" << endl;
			}
			else if (n == 5) {
				cout << "five" << endl;
			}
			else if (n == 6) {
				cout << "six" << endl;
			}
			else if (n == 7) {
				cout << "seven" << endl;
			}
			else if (n == 8) {
				cout << "eight" << endl;
			}
			else if (n == 9) {
				cout << "nine" << endl;
			}
		}

	}
}
struct Student
{
	int age;
	string first_name;
	string last_name;
	int standard;
};
int max_of_four(int a, int b, int c, int d) {
	
	double avg = (a + b + c + d) / 4;
	int ret = 0;
	if (a > avg) { ret = a; }
	if (b > avg && b > ret) { ret = b; }
	if (c > avg && c > ret) { ret = c; }
	if (d > avg && d > ret) { ret = d; }
	return ret;
}

int main()
{
	//int a, b, c, d;
	//cin >> a >> b >> c >> d;
	//int ans = max_of_four(a, b, c, d);
	//cout << endl << ans << endl;

	vector<int> s;
	for(auto i=1;i<11;i++)
		s.push_back(i);

	for (auto i = s.begin(); i != s.end(); i++)
		cout << "value :" << *i << endl;

	for (auto i = s.rbegin(); i != s.rend(); i++)
		cout << "value :" << *i << endl;

	int r = s[2];

	cout << endl << "using standerd algorithms" << endl << "------------------------------------------" << endl;
	for_each(s.begin(), s.end(), print);
	cout << endl;

	auto o = find_if(s.begin(), s.end(), even);
	while(o!=s.end()){
		cout << *o << endl;
		o = find_if(++o, s.end(), even);
	}
	cout << "------------------------------------------" << endl;
	vector<int> v;
	transform(s.begin(), s.end(), back_inserter(v), [](int n) {return n*n*n*n; });
	for_each(v.begin(), v.end(), [](int n) {cout << n << endl; });
	cout << "-----------Lambdas-----------" << endl;
	for_each(s.begin(), s.end(), [](int n) {
		if (n % 2 == 0)
			cout << n << endl;
	});
	cout << "-----------Lambdas Capturing-----------" << endl;
	vector <int> cube;
	int x = 0, y = 100;
	generate_n(back_inserter(cube),3, [&](int n) {return n*n; });

	//vector<Person> family;
	//Person Vishnu("Vishnu", "Meera", 30);
	//Person Meera("Meera", "Vishnu", 30);
	//Person Ayaan("Ayaan", "Vishnu", 30);
	//family.push_back(Ayaan);
	//family.push_back(Meera);
	//family.push_back(Vishnu);
	//cout << "my Family....." << endl;
	//for (auto i = family.begin(); i != family.end(); i++)
	//	cout << i->Getname() << endl;

	//map <int, Person> ages;
	//ages[Vishnu.GetAge()] = Vishnu;
	//ages[Meera.GetAge()] = Meera;
	//ages[Ayaan.GetAge()] = Ayaan;

	//for (auto ip = ages.begin(); ip != ages.end(); ip++)
	//	cout << (*ip).first << " " << (*ip).second.Getname();
	return 0;
}

