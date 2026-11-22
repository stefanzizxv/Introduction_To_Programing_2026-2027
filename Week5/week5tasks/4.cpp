#include <iostream>

void firstLast(int arr[], int size, int x) {

    int first = -1;
    int last = -1;

    for (int i = 0; i < size; i++) { 
        
        if (arr[i] == x && first == -1) {
            first = i;
        } else if (arr[i] == x) {
            last = i;
        }
    }

    std::cout << "First: " << first << std::endl;
    std::cout << "Last: " << last << std::endl;

}

int main () {

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

    firstLast(a, size, x);
}