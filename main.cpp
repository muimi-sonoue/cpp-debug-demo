#include <iostream>

#include "Student.h"

using namespace std;

void TestStudent() {
    Student s;

    // Setters block
    s.SetID(69);
    s.SetMidTerm(42.0);
    s.SetFinals(69.42);
    s.SetCumulative();

    // Getters block
    cout << "ID: " << s.GetID() << endl;
    cout << "Midterm: " << s.GetMidTerm() << endl;
    cout << "Finals: " << s.GetFinals() << endl;
    cout << "Cumulative: " << s.GetCumulative() << endl;

}

int main() {

    TestStudent();

    return 0;
}