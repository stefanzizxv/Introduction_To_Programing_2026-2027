#include <iostream>

void readArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
        std::cin >> arr[i];
}

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) 
        sum += arr[i];

    return sum;
}

int main() {

    const int MAX_SIZE = 20;

    const int expectedValue = (MAX_SIZE * (MAX_SIZE + 1)) / 2;

    int a[MAX_SIZE];
    readArray(a, MAX_SIZE);



    int missingElement = expectedValue - arraySum(a, MAX_SIZE);

    std::cout << "The missing element is: " << missingElement << "\n";

}


