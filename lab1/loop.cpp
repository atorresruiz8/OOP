#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    getline(cin, str1);
    
    int repeat;
    cin >> repeat;
    
    for (int i = 0; i < repeat; i++) {
        cout <<  str1 << "\n";
    }
    
    return 0;
}