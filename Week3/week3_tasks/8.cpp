#include <iostream>
using namespace std;

int main() {

    int x;
    int sum = 0;
    int counter = 0;
    cout << "Enter a number: ";

    while (counter != 5) {

        cin >> x;

        if (x > 0) {
            ++counter;
            sum += x;
        }
    }

    cout << sum;
}
