#include <iostream>
using namespace std;

int main() {
    string city = "Paris";
    string &destination = city;  // destination হলো city এর reference

    destination = "London";      // এখন city ও পরিবর্তন হবে

    cout << city << endl;        // Output: London
    return 0;
}
