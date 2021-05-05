#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream f("words.txt");
    int occurrences, flag;
  
    string word, word_input;
    cin >> word_input;
    
    while (f >> word) {
        flag = 1;
    
        for (int i = 0; i < word_input.length(); i++) {
            if (!(tolower(word[i]) == tolower(word_input[i]))) {
                flag = 0;
                break;
            } 
        } if (flag == 1) {
                occurrences++;
            }
    }
    
    cout << occurrences << endl;
    
    return 0;
}