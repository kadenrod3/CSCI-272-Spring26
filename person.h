#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name{"Kaden"};
    int age{19};
    char gender{'M'};

    void introduce() {
        cout << "Hello, I'm " << name 
             << ". I'm " << age << " years old.";

        if (gender == 'M') {
            cout << " I'm a male." << endl;
        } 
        else if (gender == 'F') {
            cout << " I'm a female." << endl;
        } 
        else {
            cout << " Gender unspecified." << endl;
        }
    }
};