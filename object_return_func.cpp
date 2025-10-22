#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char home;
    double gpa;

    Student(string n, int r, char h, double g) {
        this->name = n;
        this->roll = r;
        this->home = h;
        this->gpa = g;
    }
};

Student  fun()
{
 Student a("Rahat", 10, 'x', 4.67);
 return a;
}

int main() {
    Student obj = fun();

    cout << obj.name << " " << obj.roll << " " << obj.home << " " << obj.gpa << endl;

    return 0;
}
