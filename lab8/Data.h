#ifndef Data_h
#define Data_h
#include "Sortable.h"
#include <vector>

class Data: public Sortable {
public:
	std::vector<Sortable*> objs;

	void add(Sortable* s) {
		objs.push_back(s);
	}

	void print() {
		for (int i = 0; i < objs.size(); i++) {
			std::cout << objs[i] << " ";
		} std::cout << std::endl;
	}

	void sort() {
		int n = objs.size();
		bool swapped = true;

		while (swapped) {
			swapped = false;
			for (int i = 1; i <= n - 1; i++) {
				if (objs[i - 1] > objs[i]) {
					std::swap(objs[i - 1], objs[i]);
					swapped = true;
				}
			}
		}
	}

	virtual bool compare(const Sortable* s) {
		std::cout << "Comparing" << std::endl;
	}
};

#endif