#ifndef Circle_h
#define Circle_h
#include "Sortable.h"
#include "Data.h"

class Circle: public Sortable {
public:
	int radius;

	Circle() {
		radius = 0;
	}

	Circle(int radius) {
		this->radius = radius;
	}

	bool compare(const Sortable* s) {
		const Circle* c = dynamic_cast<const Circle*>(s);

		if (c) {
			if (radius < c->radius) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}

	void print() {
		std::cout << "Circle with radius: " << radius << std::endl;
	}
};

#endif Circle_h