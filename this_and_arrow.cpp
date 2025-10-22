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

int main() {
    string n;
    int r;
    char h;
    double g;

    cin >> n >> r >> h >> g;

    Student a(n, r, h, g);

    cout << a.name << " " << a.roll << " " << a.home << " " << a.gpa << endl;

    return 0;
}
