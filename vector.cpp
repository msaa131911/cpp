#include <iostream>
#include <string>
#include <vector> // vector header include করতে হবে
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    cars.push_back("Tesla"); // নতুন মান যোগ করা

    cout << "Car list:\n";
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\t"; // vector এর প্রতিটি element প্রিন্ট করা
    }

    return 0;
}
