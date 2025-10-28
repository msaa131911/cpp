#include <iostream>
using namespace std;

// factorial() ফাংশন ডিফাইন করা হলো
int factorial(int n){
    int fact,i;
    fact=1;
    i=1;
    while (i<=n){
        fact*=i;
        i++;
    }
    return fact;
}  

int main() {
    int n, result;
    cout << "N: ";
    cin >> n;

    result = factorial(n);
    cout << "Result: " << result << endl;

    return 0;
}
