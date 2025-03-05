#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The first 10 multiples of " << number << " are:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number * i << " ";
    }
    cout << endl;

    return 0;
}