#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int roll;
    double gpa;
};

void result(student s){
    cout<<"name:"<<s.name<<endl;
    cout<<"roll:"<<s.roll<<endl;
    cout<<"gpa:"<<s.gpa<<endl;
};

int main(){
    student s1,s2;
    s1={"alif",2458,5.00};
    s2={"abid",4578,4.65};
    result(s1);
}