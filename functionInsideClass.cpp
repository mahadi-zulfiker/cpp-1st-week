#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int english, int math){
        this->name = name;
        this->roll = roll;
        this->english = english;
        this->math = math;
    }
    // void hello(){
    //     cout << "Hello From " << name << endl;
    // }
    void total(){
        cout << "Total Marks of " << name << " = " << english+math << endl;
    }
};

int main(){
    Student sakib("Sakib Ahamed", 21, 85, 92);
    sakib.total();
    Student rakib("Rakib Ahamed", 25, 56, 98);
    rakib.total();
    return 0;
}