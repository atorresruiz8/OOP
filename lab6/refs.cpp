#include <iostream>
#include "refs.h"

using namespace std;


int main(int argc, const char * argv[])
{
	int num = 5;

	triple(num);

	cout << num << endl;
	cin >> num;
	return 0;
}