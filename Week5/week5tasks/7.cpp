#include <iostream>

void distinctCheck(int arr[], int size) {
    bool ok = true;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            ok = false;
            break;
        }
    }

    if (ok) {
        std::cout << "Yes, the sequence consists of distinct elements.\n";
    } else {
        std::cout << "No, the sequence does not consist of distinct elements.\n";
    }
}

int main() {

    const int MAX_SIZE = 100;
    int a[MAX_SIZE];
    int size;
    std::cout << "Enter the number of elements you want: ";
    std::cin >> size;
    for (int i = 0; i < size; i++ ) {
        int n;
        std::cout << "Enter " << size << " elements: ";
        std::cin >> n;
        a[i] = n;
    }

    distinctCheck(a, size);

}