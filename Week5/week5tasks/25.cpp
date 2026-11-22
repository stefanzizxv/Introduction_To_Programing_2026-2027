#include <iostream>

const int MAX_SIZE = 100;

void readArray(int arr[], int n) {
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
}

bool isValid(int n) {
    if (n <= 0 || n > MAX_SIZE) 
        return false;

    return true;
}

bool contains(const int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return true;
    }

    return false;
}

void printUnion (const int arr1[], int n, const int arr2[], int m) {
    std::cout << "Union: ";

    for(int i = 0; i < n; i++) {
        if(!contains(arr1, i, arr1[i]))
            std::cout << arr1[i] << ' ';
    }

    for (int i = 0; i < m; i++) {
        if(!contains(arr1, m, arr2[i]) && !contains(arr2, i, arr2[i]))
            std::cout << arr2[i] << ' ';
    }

    std::cout << std::endl;
}

void printIntersection(const int arr1[], int n, const int arr2[], int m) {
    std::cout << "Intersection: ";

    for (int i = 0; i < n; i++) {
        if (!contains(arr1, i, arr1[i]) && contains(arr2, m, arr1[i]))
            std::cout << arr1[i] << ' ';
    }

    std::cout << std::endl;
}

void printDiffference(int arr1[], int n, int arr2[], int m) {
    std::cout << "Difference: ";

    for (int i = 0; i < n; i++) {
        if (!contains(arr1, i, arr1[i]) && !contains(arr2, m, arr1[i]))
            std::cout << arr1[i] << ' ';
    }

    std::cout << std::endl;
}

int main() {

    int arr1[MAX_SIZE], arr2[MAX_SIZE], n, m;

    std::cout << "Enter the number of elements of the first array: ";
    std::cin >> n;

    if(!isValid(n))
        return -1;

    readArray(arr1, n);   
    
    std::cout << "Enter the number of elements of the second array: ";
    std::cin >> m;

    if (!isValid(m))
        return -1;

    readArray(arr2, m);

    printUnion(arr1, n, arr2, m);
    printIntersection(arr1, n, arr2, m);
    printDiffference(arr1, n, arr2, m);
}