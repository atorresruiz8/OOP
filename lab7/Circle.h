#ifndef Circle_h
#define Circle_h
#define _USE_MATH_DEFINES
#include <math.h>

class Circle {
	double x;
	double y;
	double r;

public:
	double area;

	Circle() {
		x = 0.0;
		y = 0.0;
		r = 1.0;
		area = M_PI * (r * r);
	}

	Circle(double x, double y, double r) {
		this->x = x;
		this->y = y;
		this->r = r;
		area = M_PI * (r * r);
	}

	double getX() const {
		return x;
	}
	
	double getY() const {
		return y;
	}

	double getR() const {
		return r;
	}

	void setX(double x) {
		this->x = x;
	}

	void setY(double y) {
		this->y = y;
	}

	void setR(double r) {
		this->r = r;
	}
};

#endif 