#include <iostream>

void readArray(int arr[], int size) {
    std::cout << "Enter " << size << "elements: ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    std::cout << "\n";
}

bool isValidPosition(int pos, int size) {
    return pos >= 0 && pos <= size;
}

void insertAt(int arr[], int& size, int pos, int value) {
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

int main () {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE], size, pos, value;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    if (size < 0 || size > MAX_SIZE) {
        std::cout << "Invalid size!\n";
    }
    readArray(a, size);

    std::cout << "Enter the position and the value you want to add to it: ";
    std::cin >> pos >> value;

    if(size == MAX_SIZE) {
        std::cout << "Array is full!\n";
        return 1;
    }

    if(!(isValidPosition(pos, size))){
        std::cout << "Invalid position!\n";
        return 1;
    }

    insertAt(a, size, pos, value);
    printArray(a, size);
    
}