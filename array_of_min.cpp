#include<bits/stdc++.h>
using namespace std;

class students
{
    public:
    string name;
    int roll;
    int cls; 
    int mark;
};

int main()
{
    int n;
    cin >> n;
     
    students a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].cls >> a[i].mark; 
    }

    students mn;
    // mn.mark = INT_MAX;
    mn.mark = INT_MIN;

    for(int i = 0; i < n; i++){
        // if(a[i].mark < mn.mark)
       if(a[i].mark > mn.mark){
        mn = a[i];
       }
    }

   cout << mn.name << " " << mn.roll << " " << mn.cls << " " << mn.mark << endl;

    return 0;
}