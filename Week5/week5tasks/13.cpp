#include <iostream>

void readArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void rotation(int arr[], int size, int k) {
    while(k != 0) {
        int temp = arr[0];
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        arr[size - 1] = temp;
        --k;
    }
}

int main() {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE], size, k;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    readArray(a, size);

    std::cout << "Enter k: ";
    std::cin >> k;

    rotation(a, size, k);
    printArray(a, size);

}