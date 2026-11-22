#include <iostream>

bool symmetry(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
            break;
        }
    }

    return true;
}

int main() {
    
    const int MAX_SIZE = 100;
    char a[MAX_SIZE];
    int size;
    std::cout << "Enter the number of elements you want: ";
    std::cin >> size;
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }

    if (size < 0 || size > MAX_SIZE) {
        std::cout << "Size must be between 0 and " << MAX_SIZE << ".\n";
        return 1;
    }

    if (symmetry(a, size)) {
        std::cout << "Yes.\n";
    } else {
        std::cout << "No.\n";
    }

}