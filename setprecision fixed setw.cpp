//setw sudu sundor dekay


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2;
    
    cout<<"enter 2 numbers:";
    cin>>num1>>num2;
    
    cout<<showpoint;
    cout<<fixed; // dosomic ar porar sonka print korba 
    cout << setprecision(10); //mot 10 gor porjon to show korba
    
    float sum=num1+num2;
    cout << setw(10)<< "Sum is : " << sum << endl;
    

    cout<<noshowpoint;
    
    float sub = num1 - num2;
    cout <<setw(10)<< "Subtraction is : " << sub << endl;

    float mul = num1 * num2;
    cout << setw(10)<< "Multiplication is : " << mul << endl;

    float dive = num1 / num2;           
    cout << setw(10)<< "Division is : " << dive << endl;

    return 0;
}