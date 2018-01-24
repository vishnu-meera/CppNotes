#include <iostream>
#include "Tweeter.h"

using namespace std;

int main()
{
    Person p1("Vishnu","Sankar",12);
    {
        Tweeter p2("Meera","Raveendran",12,"@me");
    }
    cout << "Hello world!" << endl;
    return 0;
}
