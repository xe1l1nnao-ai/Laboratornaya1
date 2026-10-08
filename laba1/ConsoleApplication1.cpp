#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "All numbers are equal" << endl;
    }
    else if (a != b && b != c && a != c) {
        cout << "All numbers are distinct" << endl;
    }
    else {
        cout << "Exactly two values matched" << endl;
    }

    return 0;
}


