// type kasting c++

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout<<"enter 2 numbers:";
    cin>>num1>>num2;
    
    int sum=num1+num2;
    cout << "Sum is : " << sum << endl;

    int sub = num1 - num2;
    cout << "Subtraction is : " << sub << endl;

    int mul = num1 * num2;
    cout << "Multiplication is : " << mul << endl;

    double dive =(float) num1 / num2;           //type kasting
    cout << "Division is : " << dive << endl;

    return 0;
}

