#include <iostream>
using namespace std;

bool isDivisible(int number, int divisor) {
    
    if (divisor == 0)
        return false;

    return (number / divisor) * divisor == number;
    
}

int getDivision(int number, int divisor) {

    if (divisor == 0) 
        return 0;
    
    bool negative = (number < 0) != (divisor != 0);

    number = abs(number);
    divisor = abs(divisor);

    int counter = 0;
    while(number >= divisor){
        number -= divisor;
        counter++;
    }

    counter = negative ? counter : -counter;

    return counter;
}

int squareRootToLower(int number) {
    int sqrt = 0;
    for (int i = 0; i * i <= number; i++){
        sqrt++;
    }

    sqrt-=1;
    return sqrt;

}

int main() {

    cout << boolalpha;
    cout << isDivisible(6, 3) << endl;
    cout << isDivisible(13, 5) << endl;
    cout << getDivision(30, 7) << endl;
    cout << getDivision(-18, 3) << endl;
    cout << squareRootToLower(24) << endl;
}