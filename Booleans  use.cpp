#include<iostream>
using namespace std;
int main()
{
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << isCodingFun << "\n";  // Outputs 1 (true)
    cout << isFishTasty << "\n"; // Outputs 0 (false)
    
    cout << boolalpha; // boolalpha হল C++ এর একটি I/O manipulator। এটা ব্যবহার করলে cout বুলিয়ান মানকে true/false আকারে প্রিন্ট করে, ১/০ আকারে নয়
    cout << isCodingFun << "\n";   // Outputs true
    
    cout << noboolalpha;//boolalpha-এর বিপরীত কাজ করে।  1 / 0 আকারে দেখায়
    cout << isFishTasty << "\n";  // Outputs false

    
    
}