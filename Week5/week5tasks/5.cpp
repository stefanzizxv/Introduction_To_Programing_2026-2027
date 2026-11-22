#include <iostream>

int countOccurences(int arr[], int size, int x) {

    int counter = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] == x){
            counter++;
        }
    }

    return counter;

}

int countNegative(int arr[], int size) {

    int counter = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] < 0){
            counter++;
        }
    }

    return counter;

}

int main() {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int size, x;
    std::cout << "Enter the number of elements you want: ";
    std::cin >> size;
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++){
        int n;
        std::cin >> n;
        a[i] = n;
    }   

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Occurences of " << x << ": " << countOccurences(a, size, x) << std::endl;
    std::cout << "Negative: " << countNegative(a, size) << std::endl;
    
}