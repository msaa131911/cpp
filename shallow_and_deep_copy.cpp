#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    double* cgpaptr;      //pointer
    student(string name,double cgpa){
        this->name=name;
        cgpaptr = new double;
        *cgpaptr=cgpa;     //pointer
    }
    student(student &orgobj){
        this->name=orgobj.name;
        cgpaptr =  new double;
        *cgpaptr=*orgobj.cgpaptr; //pointer
    }
    void print(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaptr<<endl;
    }
};

int main(){
    student s1("dipu",3.5);
    s1.print();
    

    student s2(s1);
    *(s2.cgpaptr)=4.5; //pointer
    
    s2.name="nell";
    s2.print();
}