#include<iostream>
#include<string>
using namespace std;
class student{
private:
double salary;



public:
    string name;
    string dept;
    string subject;
    
    void change_dept(string new_dept){
        dept=new_dept;
    
    
    }

};
int main(){
    student s1;
    s1.name="dipu";
    s1.dept="cse";
    s1.change_dept("ece");
    //s1.salary=50000;
    cout<<s1.dept<<endl;
}