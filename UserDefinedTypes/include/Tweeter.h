#ifndef TWEETER_H
#define TWEETER_H

#include <Person.h>
#include <string>

class Tweeter : public Person
{
    public:
        Tweeter(string fn, string ln, int ag, string tweetHan);
       ~Tweeter();

    private:
        string tweeterHandle;
};

#endif // TWEETER_H
