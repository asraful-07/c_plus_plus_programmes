#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int cls;
    int math;
    int eng;

    student(string name, int cls, int math, int eng){
       this->name = name; 
       this->cls = cls;
       this->math = math;
       this->eng = eng;
    };
    void hello()
    {
        cout << "hello bro " << name << " = " << math + eng << endl;
    };
};


int main()
{
    student a("abcd", 12, 44, 46);
    student b("cvb", 18, 36, 48);
    
    a.hello();
    b.hello();

    return 0;
}