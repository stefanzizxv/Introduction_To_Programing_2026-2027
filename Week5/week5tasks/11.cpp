#include <iostream>

int main() {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE], size, pos;
    std::cout << "Enter the amount of elements: ";
    std::cin >> size;

    if (size < 0 || size > MAX_SIZE) {
        std::cout << "Invalid size!";
        return 1;
    }

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }

    std::cout << "Enter the index you want to remove: ";
    std::cin >> pos;

    for (int i = pos; i < size; i++) {
        a[i] = a[i + 1];
    }

    size--;

    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }

}