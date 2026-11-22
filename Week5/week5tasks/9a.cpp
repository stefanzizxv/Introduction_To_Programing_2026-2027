#include <iostream>
#include <utility>

void swapArr(int arr[], int size) {
    for (int i = 0; i < (size/2); i++) {
        std::swap(arr[i], arr[size - 1 - i]);
    }

    for (int i = 0; i < size; i++) 
        std::cout << arr[i] << " ";

}

int main() {
    int MAX_SIZE = 100;
    int a[MAX_SIZE], size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    
    if (size < 0 || size > MAX_SIZE) {
        std::cout << "Invalid size!\n";
        return 1;
    }

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }

    swapArr(a, size);

}