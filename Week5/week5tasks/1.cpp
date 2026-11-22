#include <iostream>

int main() {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int size;
    std::cout << "Enter the number of elements you want: ";
    std::cin >> size;
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++){
        int n;
        std::cin >> n;
        a[i] = n;
    }

    for (int i = 0; i < size; i++) {
        std::cout << a[size - i - 1] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            std::cout << a[i] << " ";
        }
    }

}