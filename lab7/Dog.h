#ifndef Dog_h
#define Dog_h
#include "Animal.h"

class Dog: public Animal {
public:
	Dog(string name, int age) {
		cout << "Creating Dog" << endl;
		Animal::setName(name);
		Animal::setAge(age);
	}

	~Dog() {
		cout << "Deleting Dog" << endl;
	}

	void feed() {
		cout << "A bone, please!" << endl;
	}
};

#endif