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

bool isSubarray(int arr1[], int n, int arr2[], int m) {
    if (m == 0) 
        return true;
    if(m > n)
        return false;

    for (int i = 0; i <= n - m; i++) {
        bool match = true;

        for (int j = 0; j < m; j++) {
            if (arr1[i + j] != arr2[j]) {
                match = false;
                break;
            }
        }

        if(match)
            return true;
    }

    return false;
}

int main() {

    int arr1[MAX_SIZE], arr2[MAX_SIZE], n, m;

    std::cout << "Enter the number of elements of the first array: ";
    std::cin >> n;

    if (!isValid(n))
        return -1;

    readArray(arr1, n);
    
    std::cout << "Enter the number of elements of the second array: ";
    std::cin >> m;

    if (!isValid(m))
        return -1;

    readArray(arr2, m);


    std::cout << std::boolalpha;
    std::cout << isSubarray(arr1, n, arr2, m) << std::endl;
}