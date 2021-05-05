#ifndef Entry_h
#define Entry_h
#include <iostream>
#include <string>

using namespace std;

struct Entry {
    
    string first_name, last_name, mail;

    void setName(const string name) {
        first_name = name;
    } 

    void setLastname(const string lastname) {
        last_name = lastname;
    }

    void setEmail(const string email) {
        mail = email;
    }

    void print() {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Email: " << mail << endl;
    }
};


#endif /* Entry_h */