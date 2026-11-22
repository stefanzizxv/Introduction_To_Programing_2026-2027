#include <iostream>

double avg(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    double avg = (double)sum / size;
    
    return avg;
}   

int closest(int arr[], int size) {
    double average = avg(arr, size);
    double smallestDiff = abs(arr[0] - average);
    int closest = arr[0];

    for (int i = 1; i < size; i++) {
        if (smallestDiff > (abs(arr[i] - average))) {
            closest = arr[i];
            smallestDiff = abs(arr[i] - average);
        }    
    }

    return closest;
}

int main() {
    int MAX_SIZE = 100;
    int a[MAX_SIZE], size;
    std::cout << "Enter how many elements you want: ";
    std::cin >> size;
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }

    std::cout << avg(a, size) << std::endl;
    std::cout << closest(a, size) << std::endl;

}