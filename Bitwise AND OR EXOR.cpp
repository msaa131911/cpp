//Bitwise AND OR EXOR
#include<iostream>
using namespace std;
int main()
{
    int a = 32;
    int b = 12;
    int c;

    c = a & b;   // Bitwise AND
    cout << "a & b = " << c << endl;

    c = a | b;   // Bitwise OR
    cout << "a | b = " << c << endl;

    c = a ^ b;   // Bitwise XOR
    cout << "a^b = " << c << endl;

    return 0;
}
