#include <iostream>
using namespace std;

int main() {
    int num, i;
    char str1;
    
    cin >> str1 >> num;
    
    while (num != -2) {
        i = 0;
        
        if (num != -1 && num > 0) {
            while (i < num) {
                cout << str1;
                i++;
            }
        } else {
            cout << "\n";
        }
        
        cin >> str1 >> num;
    }
    
    return 0;
}