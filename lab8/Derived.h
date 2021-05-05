#ifndef Derived_h
#define Derived_h
#include "ADT.h"

class Derived: public ADT {
	void doSomething() {
		std::cout << "I did something" << std::endl;
	}

	void doSomethingElse() {
		std::cout << "I did something else" << std::endl;
	}

	void dontDoThis() {

	}

};

#endif