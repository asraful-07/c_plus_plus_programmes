#include<bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
    int roll;
    int cls; 
};

bool cmp(students a, students b){
    return a.roll < b.roll; 
    // if(a.roll < b.roll){
    //     return true;
    // }else{
    //     return false;
    // }

    // return (a.mark == b.mark ) ? a.roll < b.roll : a.mark > b.mark;
}

int main()
{
    int n;
    cin >> n;

    students a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].cls;
    }
 
     sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].cls << endl;
    }

    return 0;
}