#ifndef PERSON_H
#define PERSON_H

#include <string>

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
