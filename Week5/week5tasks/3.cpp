#include <iostream>

void arrMin(int arr[], int size) {

    int min = arr[0];
    int index;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    } 

    std::cout << "Min: " << min << " (Index " << index << ")\n";
    
}

void arrMax(int arr[], int size) {

    int max = arr[0];
    int index;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    } 

 
    std::cout << "Max: " << max << " (Index " << index << ")\n";
    
}

int main() {

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

    //3 1 2 8 13 5 1 6 25

    arrMin(a, size);
    arrMax(a, size);

}