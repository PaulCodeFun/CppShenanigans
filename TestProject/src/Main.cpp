//============================================================================
// Name        : TestProject.cpp
// Author      : Paul
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

class Base
{
public:
    virtual void f()
    {
        std::cout << "Base class default behaviour\n";
    }
};

class Derived : public Base
{
public:
    void f() override
    {
        std::cout << "Derived class overridden behaviour\n";
    }
};

int main()
{
	Base* e = new Base();
	e->f();

	Derived* p = new Derived();
	p->f();

	Base* s = p;
	s->f();

    return 0;
}
