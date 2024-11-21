#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    Student a,b;
    // a.roll = 10;
    // a.gpa = 3.5;
    // char temp[100] = "Sakib";
    // strcpy(a.name,temp);

    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    // getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}