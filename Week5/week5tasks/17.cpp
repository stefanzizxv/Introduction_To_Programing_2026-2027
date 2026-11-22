#include <iostream>

int main () {
    const int RANGE = 20; 
    int count[RANGE] = {};

    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        int x;
        std::cin >> x;
        count[x]++;
    }

    for (int i = 0; i < RANGE; i++) {
        if (count[i] > 0)
            std::cout << i << ": " << count[i] << "\n";
    }
    
}