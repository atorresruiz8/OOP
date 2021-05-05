    #include <iostream>
    using namespace std;

    int main() {
        int num;
        cin >> num;
      
        while (num != -1) {
            if (num == -1) {
                exit;
            }
            if (num % 2 == 0) {
                cout << "EVEN\n";
                cin >> num;
            } else {
                cout << "ODD\n";
                cin >> num;
            }
        }
        return 0;
    }