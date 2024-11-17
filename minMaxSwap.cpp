#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    // if(a<b){
    //     cout << a << endl;
    // }
    // else{
    //     cout << b << endl;
    // }
    // cout << min(a,b) << endl;
    // cout << max(a,b) << endl;

    // cout << min({3,4,5,345,34,4}) << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a,b);

    cout << a << " " << b << endl;
    return 0;
}