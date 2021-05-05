#ifndef Object_h
#define Object_h

class Object {
public:
	static int count;

	Object() {
		count++;
	}

	Object(const Object &obj) {
		count++;
	}
};

#endif