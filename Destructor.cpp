#include<iostream>
#include<string>
using namespace std;

class student {
public:
    string name;
    double* cgpaptr;

    student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    student(student &orgobj) {
        this->name = orgobj.name;
        cgpaptr = new double;
        *cgpaptr = *orgobj.cgpaptr;  // deep copy
    }

    ~student() {
        cout << "Destructor called for: " << name << endl;
        delete cgpaptr; // free memory
    }

    void print() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaptr << endl;
    }
};

int main() {
    student s1("dipu", 3.5);
    student s2(s1);

    s1.print();
    s2.print();
}
