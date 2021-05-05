#ifndef Participant_h
#define Participant_h

#include <string>

#include "Sortable.h"
#include "Data.h"

class Participant: public Sortable {
public:
	std::string name;
	int age;
	double score;

	static bool(*comp_cb)(const Participant*, const Participant*);

	Participant() {
		name = " ";
		age = 0;
		score = 0.0;
	}

	Participant(std::string name, int age, double score) {
		this->name = name;
		this->age = age;
		this->score = score;
	}

	bool compare(const Sortable* s) {
		const Participant* person = dynamic_cast<const Participant*>(s);

		if (person) {
			if (comp_cb(this, person)) {
				return false;
			}
			else {
				return true;
			}
		}
		else {
			return false;
		}
	}

	void print() {
		std::cout << this->name << "\t" << this->age << "\t" << this->score << "\t" << std::endl;
	}
};

#endif