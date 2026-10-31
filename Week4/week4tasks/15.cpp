#include <iostream>
using namespace std;

bool isInRange(int number, int from, int to){
    if (number >= from && number <= to)
        return true;

    return false;
    
}

void readInRange(int from, int to){

    int number;
    do{
        cout << "Enter a number in [" << from << ", " << to << "]: ";
        cin >> number;
    }while(isInRange(number, from, to) == false);

    cout << "You entered: " << number << ", which is in the interval of " << from << " to " << to << endl;

}

int main() {

    readInRange(1, 12);

}