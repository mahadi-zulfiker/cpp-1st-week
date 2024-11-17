#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "sat\n";
        break;
    case 2:
        cout << "sun\n";
        break;
    case 3:
        cout << "mon\n";
        break;
    default:
    cout << "Invalid day\n";
    } 
}