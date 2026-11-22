#include <iostream>

void readArray (int arr[], int size) {
    std::cout << "Enter " << size  << " elements: ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i]; 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << "\n";
}

void mergeSorted(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while(i < n)
        result[k++] = a[i++];

    while(j < m)
        result[k++] = b[j++];
}

int main() {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE], b[MAX_SIZE], result[MAX_SIZE], n, m;

    std::cout << "Enter the sizes of the two arrays: ";
    std::cin >> n >> m;

    if (n <= 0 || n > MAX_SIZE) {
        std::cout << "Invalid input!\n";
        return 1;
    } 
    
    if (m <= 0 || m > MAX_SIZE) {
        std::cout << "Invalid input!\n";
        return 1;
    }

    readArray(a, n);
    readArray(b, m);

    mergeSorted(a, n, b, m, result);
    printArray(result, n + m);
}