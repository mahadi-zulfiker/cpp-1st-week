#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main(){
    int r;
    int c;
    double g;
    cin >> r >> c >> g;
    
    Student rahim(r,c,g);

    Student karim(55,35,55.4);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa;
    return 0;
}