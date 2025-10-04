#include<iostream>
#include<cmath>   // pow() 

using namespace std;

int main()
{
   double pi, r, area;
   
   pi = 3.1416;
   
   cout << "Enter your r: ";
   cin >> r;
   
   area = pi * pow(r, 2);  // r^2
   cout << "Result: " << area << endl;
   
   return 0;
}