#pragma once
template <class T>
class Accum {
	T total;
public:
	Accum(T start) :total(start) {};
	T GetTotal() { return total; };
	T operator+=(const T& t) { return total = total + t; };
};


template <>
class Accum <classOverload>{
	int totalAge;
public:
	Accum(int start) :totalAge(start) {};
	int GetTotal() { return totalAge; };
	int operator+=(classOverload& t) { return totalAge = totalAge + t.Getage(); };
};