// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Resource.h"

using std::cout;
using std::cin;
using std::endl;
int main()
{
	//int x = 9999;
	//int* pX = &x;
	//cout << "Pointer pointing " << *pX << endl;
	//cout << "Pointer address " << pX << endl;
	////*pX = NULL;
	//cout << "Pointer pointing " << *pX << endl;
	//cout << "Pointer address " << pX << endl;

	//{
	//	Person vishnu("Vishnu", "Sankar", 2000);
	//	Person *pVishnu = &vishnu;

	//	cout << "Pointer pointing " << pVishnu->GetName() << endl;
	//	cout << "Pointer address " << pVishnu << endl;

	//	//int* badpointer = nullptr;
	//	//if (*badpointer) {
	//	//	*badpointer = 3;
	//	//}
	//	//cout << "Pointer pointing " << *badpointer << endl;
	//	//cout << "Pointer address " << badpointer << endl;
	//}

	//int y = 1000;

	//const int *pY = &y;
	//cout << "pointer to a const : " << *pY <<" , "<< pY << endl;
	//pY = &x;
	//cout << "pointer to a const : " << *pY << " , " << pY << endl;

	//int* const pZ = &x;
	//cout << "pointer to a const : " << *pZ << " , " << pZ << endl;
	//*pZ = 1001;
	//cout << "pointer to a const : " << *pZ << " , " << pZ << endl;

	//{
	//	Resource inStack("local");
	//	string name = inStack.Getname();
	//}

	//Resource* pInHeap = new Resource("created with new");
	//string name = pInHeap->Getname();

	//Resource* p2 = pInHeap;
	//name = p2->Getname();

	//delete pInHeap;
	//cout << "Everything id fine upto here" << endl;
	//name = pInHeap->Getname();
	//pInHeap = nullptr;
	//delete pInHeap;
	//delete p2;

	Person Meera("Vishnu", "Sankar", 234);
	Meera.AddResource();
	Meera.SetName("Meera", "Raveendran");
	Meera.AddResource();
	Person Vishnu = Meera;
	Meera = Vishnu;
	string s1 = Meera.GetResourceName();
    return 0;


}

