#include <iostream>

void readArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
        std::cin >> arr[i];
}

int mostFrequentNumber(int arr[], int size) {
    int bestCount = 0;
    int bestValue = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > bestCount) {
            bestCount = count;
            bestValue = arr[i];
        }
    }

    return bestValue;
}

int main() {

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE], size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid input!\n";
        return 1;
    }

    readArray(arr, size);

    std::cout << "Most frequent number: " << mostFrequentNumber(arr, size) << "\n"; 

}