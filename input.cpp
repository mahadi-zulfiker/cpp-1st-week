#include <iostream>
using namespace std;
int main(){
    int x;
    char c;
    cin >> x >> c;
    cout << (char)x << " " << x << " " << (int)c << " " << c;
    int ascii = c;
    cout << ascii << endl;
    return 0;
}