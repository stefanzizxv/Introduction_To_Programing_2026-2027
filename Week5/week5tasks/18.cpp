#include <iostream>

void readArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
        std::cin >> arr[i];
}

void binarySearch(int arr[], int size, int x) {
    int left = 0, right = size - 1, count = 0;
    int foundIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            foundIndex = mid;
            count++;
            break;
        } else if (arr[mid] < x) {
            left = mid +1;
        } else {
            right = mid - 1;
        }
        count++;
    }

    std::cout << "Index: " << foundIndex << "\n";
    std::cout << "Steps: " << count << "\n";

}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE], size, x;

    std::cout << "Enter the amount of elements: ";
    std::cin >> size;

    readArray(arr, size);

    std::cout << "Enter x: ";
    std::cin >> x;

    binarySearch(arr, size, x);

}