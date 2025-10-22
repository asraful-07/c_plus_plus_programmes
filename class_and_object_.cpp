#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    char name[100];
    int roll;
    double gpa;
    char home;
};

int main()
{
    student a;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa >> a.home;
    cin.ignore();
    // next object under

    cout << a.name << " " << a.roll << " " << a.gpa << " " << a.home;

    return 0;
}