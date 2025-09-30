//showpoint
//noshowpoint



#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    
    cout<<"enter 2 numbers:";
    cin>>num1>>num2;
    
    cout<<showpoint;
    
    float sum=num1+num2;
    cout << "Sum is : " << sum << endl;
    

    cout<<noshowpoint;
    
    float sub = num1 - num2;
    cout << "Subtraction is : " << sub << endl;

    float mul = num1 * num2;
    cout << "Multiplication is : " << mul << endl;

    float dive = num1 / num2;           
    cout << "Division is : " << dive << endl;

    return 0;
}
