#include <iostream>
using namespace std;

int main() {
    int number, count;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter how many multiples you want: ";
    cin >> count;

    cout << "The first " << count << " multiples of " << number << " are:" << endl;
    for (int i = 1; i <= count; ++i) {
        cout << number * i << " ";
    }
    cout << endl;

    return 0;
}