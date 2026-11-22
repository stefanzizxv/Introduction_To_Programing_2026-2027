#include <iostream>

void readArray(int arr[], int size) {
    for (int i = 0; i < size; i++) 
        std::cin >> arr[i];
}

void repeat(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i - 0; j++) {
            if (arr[i] == arr[j]) {
                std::cout << arr[i] << "\n";
                return;
            }
        }
    }
    std::cout << "No repeats!\n";
}

int main() {
    int MAX_SIZE = 100;
    int a[MAX_SIZE], size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid input!";
        return 1;
    }

    readArray(a, size);

    repeat(a, size);

}