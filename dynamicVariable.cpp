#include<bits/stdc++.h>
using namespace std;

int* p;
int fun(){
    int x = 10;
    p = &x;
    cout << "Fun ->" << *p << endl;
    return x;
}

int main(){
    // int x = 10;
    // int *p = new int;
    // *p = 100;
    // cout << *p << endl;
    int y = fun();
    cout << "main ->" << *p << endl;
    return 0;
}