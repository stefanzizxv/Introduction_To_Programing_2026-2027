#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 10 == 6 || i % 10 == 8) {
            sum += i;
        }
    }

    cout << sum;

}