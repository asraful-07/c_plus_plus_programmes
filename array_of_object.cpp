#include<bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
    int roll;
    int cls; 
};

int main()
{
    int n;
    cin >> n;

    students a[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        
        cin >> a[i].roll >> a[i].cls;
    }

    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].cls << endl;
    }

    return 0;
}