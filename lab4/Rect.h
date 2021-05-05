#ifndef Rect_h
#define Rect_h
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
};

class Rect {
public:
	float x, y, width, height;

	Rect() {
		x = y = width = height = 0;
	}

	Rect(float x1, float y1, float width1, float height1) {
		x = x1;
		y = y1;
		width = width1;
		height = height1;
	}

	bool contains(Vec v) {
		if (x <= v.x && (x + width >= v.x && y >= v.y && (y - height) <= v.y)) {
			return true;
		}
		else {
			return false;
		}
	}

};

#endif /* Rect_h */