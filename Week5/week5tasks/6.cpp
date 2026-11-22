#include <iostream>

void decreasingCheck(int arr[], int size) {
    bool ok = true;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i+1]){
            ok = false;
            break;
        }
    }

    if (ok) {
        std::cout << "The sequence is monotonically decreasing.\n";
    } else {
        std::cout << "The sequence is not monotonically decreasing.\n";
    }

}

int main() {
    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int size;
    std::cout << "Enter the number of elements you want in your array: ";
    std::cin >> size;
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        int n;
        std::cin >> n;
        a[i] = n;
    }

    decreasingCheck(a, size);

}