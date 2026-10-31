#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int min = x;
    int counter = (x <= 0) ? 1 : 0;

    while (counter != 3) {

        cin >> x;

        if (x < min) {
            min = x;
        }

        counter = (x >= 0) ? 0 : counter += 1;

    }

    cout << min;

}

