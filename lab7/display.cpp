#include <iostream>
#include <string>
#include <vector>

#include "display.h"
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<Animal*> v;

	char ch;
	string name;
	int age;

	for (int i = 0; i < N; i++) {
		cin >> ch >> name >> age;

		if (ch == 'A') {
			v.push_back(new Animal());
		}
		else if (ch == 'D') {
			v.push_back(new Dog(name, age));
		}
	}

	display(v);
}