#include <iostream>
#include <utility>

void readArray(int arr[], int n) {
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

int printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) 
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
    return n;
}

bool isValid(int n, const int MAX_SIZE) {
    if (n <= 0 || n > MAX_SIZE) 
        return false;

    return true;
}

int bubbleSort(int arr[], int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    return swapCount;
}

int selectionSort (int arr[], int n) {
    int swapCount = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != 1) {
            std::swap(arr[i], arr[minIndex]);
            swapCount++;
        }
    }

    return swapCount;
}

int main() {

    const int MAX_SIZE = 100;

    int arr1[MAX_SIZE], arr2[MAX_SIZE], n;

    std::cout << "Enter how many elements you want: ";
    std::cin >> n;

    if (!isValid(n, MAX_SIZE))
        return -1;

    readArray(arr1, n);

    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i];

    int bubbleSwaps = bubbleSort(arr1, n);
    int selectionSwaps = selectionSort(arr2, n);

    std::cout << "Bubble sort: ";
    printArray(arr1, n);
    std::cout << "(Swaps: " << bubbleSwaps << ")\n";

    std::cout << "Selection sort: ";
    printArray(arr2, n);
    std::cout << "(Swaps: " << selectionSwaps << ")\n";
    
}