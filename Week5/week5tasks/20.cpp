#include <iostream>

void readArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

int longestDecreasingRun(int arr[], int size) {
    if (size == 0)
        return 0;

    int current = 1;
    int best = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1])
            current++;
        else 
            current = 1;

        if (current > best)
            best = current;
    }

    return best;

}

int main() {

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE], size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    readArray(arr, size);

    if(size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid input!\n";
        return 1;
    }

    std::cout << "Longest decreasing run: " << longestDecreasingRun(arr, size) << "\n";

}