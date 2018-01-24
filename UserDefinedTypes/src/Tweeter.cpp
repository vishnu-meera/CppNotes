#include "Tweeter.h"
#include <string>
#include <iostream>

using namespace std;

Tweeter::Tweeter(string fn, string ln, int ag, string tweetHan) : Person(fn, ln, ag), tweeterHandle(tweetHan)
{
     cout<<"Constructing Tweeter "<<tweeterHandle<<endl;
}

Tweeter::~Tweeter()
{
    cout<<"Desstructing Tweeter "<<tweeterHandle<<endl;
}
