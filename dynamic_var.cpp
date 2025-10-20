#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p = 10;
    int *q = new int;
    // int *q = new int(p);
    *q = 100;

    cout << *q << endl;

    delete q;

    return 0;
}