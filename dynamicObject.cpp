#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main(){

    Student rahim(55,35,55.4);
    Student* karim = new Student(10,5,4.5);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa;

    return 0;
}