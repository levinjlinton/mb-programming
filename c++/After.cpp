#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number, count;

    cout << "Enter a number: ";
    while (!(cin >> number)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter how many multiples you want: ";
    while (!(cin >> count) || count <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "The first " << count << " multiples of " << number << " are:" << endl;
    for (int i = 1; i <= count; ++i) {
        cout << number * i << " ";
    }
    cout << endl;

    return 0;
}


//I changed the code to allow the user to input the number of multiples they want to see.
//I added a check for integer input and a check for positive integer input.
//I also added a check for the number of multiples to be a positive integer.
//I used cin clear() to clear the error flags