#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;
    
    cin >> num;
    
    for (int i = 2; i < num; i++) {
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        } if (prime)
            cout << i << endl;
        prime = true;
    }
      
    return 0;
}