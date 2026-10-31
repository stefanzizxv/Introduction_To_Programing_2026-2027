#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    unsigned long long factorial = 1;

    for (int i = 1; i <= n; i++ ) {
        factorial *= i;
    }
    cout << factorial;
}