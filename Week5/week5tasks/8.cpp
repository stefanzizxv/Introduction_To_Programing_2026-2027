#include <iostream>

bool symmetry(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
            break;
        } else {
            return true;
        }
    }
}

int main() {
    
    const int MAX_SIZE = 100;
    int a[MAX_SIZE], size;
    std::cout << "Enter the number of elements you want: ";
    std::cin >> size;
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        int n;
        std::cin >> n;
        a[i] = n;
    }

    if (symmetry(a, size)) {
        std::cout << "Yes.\n";
    } else {
        std::cout << "No.\n";
    }

}