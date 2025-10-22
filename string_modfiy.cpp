#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2;
    cin >> s >> s2;

    // s.append(s2);
    // s += s2;
    // s = s2;
    // s.erase(2, 2);
    // s.insert(4, "ef");
    // s.replace(4, 0, "ef");
    cout << s << endl; 

    return 0;
}

/*
s+= -> append another string.
s.append() -> append another string.
s.push_back() -> add character to the last of the string.
s.pop_back() -> remove the last character of the string.
s= -> assign string.
s.assign() -> assign string.
s.erase() -> erase characters from the string.
s.replace() -> replace a portion of the string.
s.insert() -> insert a portion to a specific position.
*/