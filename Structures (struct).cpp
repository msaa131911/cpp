#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int roll;
    double gpa;
};

int main()
{
    struct student s1,s2;
    s1.name="alif";
    s1.roll=2154;
    s1.gpa=4.22;
    s2.name="abid";
    s2.roll=5478;
    s2.gpa=5.00;
    cout<<s2.name;
}
//আরও সুন্দরভাবে লেখা যায়
 /* student s1 = {"Alif", 2154, 4.22};
    student s2 = {"Abid", 5478, 5.00};

    cout << "Name: " << s2.name << endl;
    cout << "Roll: " << s2.roll << endl;
    cout << "GPA : " << s2.gpa << endl;
*/