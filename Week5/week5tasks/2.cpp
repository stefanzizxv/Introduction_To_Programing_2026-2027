#include <iostream>

int sumOfArr (int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++){
        sum+=arr[i];
    }

    return sum;
}

double average(int arr[], int size) {
    double avg = sumOfArr(arr, size) / size;
    return avg;
}

int main () {
    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int size;
    std::cout << "Enter the number of elements you want: ";
    std::cin >> size;
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++){
        int n;
        std::cin >> n;
        a[i] = n;
    }
    std::cout << "Sum: " << sumOfArr(a, size) << std::endl;
    std::cout << "Average: " << average(a, size) << std::endl;
}