#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << s.front() << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;
    cout << s.back() << endl;

    return 0;
}


/*
S[i] -> access the ith index of the string.
s.at(i) -> access the ith index of the string.
s.back() -> access the last element of the string.
s.front() -> access the first element of the string.
*/