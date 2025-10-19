#include<iostream>
using namespace std;

int main()
{
    int x, y, w, z;
    cin >> x >> y >> w >> z;

    int p, q;
    cin >> p >> q;

    int mn = min(min(x, y), min(w, z));
    int mx = max(max(x, y), max(w, z));

    cout << mn << endl;
    cout << mx << endl;


    swap(p, q);
    cout << p << " " << q << endl;

    cout << min(p, q) << endl;
    return 0;
}
