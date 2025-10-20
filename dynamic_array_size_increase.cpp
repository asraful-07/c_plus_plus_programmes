#include <bits/stdc++.h>
using namespace std;

int* fun()
{
    int* a = new int[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    int* b = new int[6]; // heap memory

    for (int i = 0; i < 4; i++) {
        b[i] = a[i];
    }

    b[4] = 5;
    b[5] = 6;

    for (int i = 0; i < 6; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return b;
}

int main()
{
    int* x = fun();

    cout << "In main: ";
    for (int i = 0; i < 6; i++) {
        cout << x[i] << " ";
    }

    delete[] x; 
    return 0;
}
