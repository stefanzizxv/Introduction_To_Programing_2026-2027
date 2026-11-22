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
}

int arrInInterval(int arr[], int result[],int size, int a, int b){
    int count = 0;
    for (int i = 0; i < size; i++) {
       if (arr[i] >= a && arr[i] <= b) 
            result[count++] = arr[i];
    }

    return count;

}

int main() {

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE], result[MAX_SIZE], size, a, b;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid input!";
        return 1;
    }

    readArray(arr, size);

    std::cout << "Enter a and b: ";
    std::cin >> a >> b;

    if (a > b) {
        std::cout << "Invalid input! a should be less or equal to b!";
        return 1;
    }

    int count = arrInInterval(arr, result, size, a, b);
    printArray(result, count);

}
