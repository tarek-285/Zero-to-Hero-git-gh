#include <iostream>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student a, b;
 
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore(); 
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    cout << "---------------------------" << endl;

    
    if (a.gpa > b.gpa) {
        cout << "Top Student: " << a.name << " with GPA " << a.gpa << endl;
    } 
    else if (b.gpa > a.gpa) {
        cout << "Top Student: " << b.name << " with GPA " << b.gpa << endl;
    } 
    else {
        cout << "Both students have the same GPA!" << endl;
    }

        if (a.gpa < 3.00) {
        cout << "Alert: " << a.name << " has failed." << endl;
    }
    if (b.gpa < 3.00) {
        cout << "Alert: " << b.name << " has failed." << endl;
    }

    return 0;
}