#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person{
    public:
        Person(string fn, string ln, int ag);
        ~Person();
    private:
        string FName;
        string LName;
        int age;
};

#endif // PERSON_H
