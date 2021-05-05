#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream f("words.txt");
    int numword = 0;
    string word;
    
    while (f >> word) {
        ++numword;
    }
    
    cout << numword << endl;
    
    return 0;
}