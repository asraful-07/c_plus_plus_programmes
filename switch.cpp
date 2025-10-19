#include<iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch(day)
    {
        case 1:
            cout << "fri\n";
            break;
        case 2:
            cout << "sat\n";
            break;
        case 3:
            cout << "sun\n";
            break;
        case 4:
            cout << "mon\n";
            break;
        case 5:
            cout << "tue\n";
            break;
        case 6:
            cout << "wed\n";
            break;
        case 7:
            cout << "thu\n";
            break;
        default:
            cout << "invalid day\n";
    }

    return 0;
}
