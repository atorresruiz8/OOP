#ifndef Vec_h
#define Vec_h
#include <iostream>

using namespace std;


class Vec {
public:
	float x, y;

	Vec() {
		x = y = 0.0f;
	}

	Vec(float x1, float y1) {
		x = x1;
		y = y1;
	}

	float getX() {
		return x;
	}

	float getY() {
		return y;
	}

	void add(Vec v) {
		x += v.x;
		y += v.y;
	}

	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

#endif /* Vec_h */