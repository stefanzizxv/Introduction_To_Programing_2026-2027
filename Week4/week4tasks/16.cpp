#include <iostream>
using namespace std;

bool calculate(int a, int b, int& result, char operation = '+'){
    if (operation == '+'){
        result = a + b;
        cout << "true, r = " << result;
        return true;
    } else if(operation == '-') {
        result = a - b;
        cout << "true, r = " << result;
        return true;
    } else if (operation == '*'){
        result = a * b;
        cout << "true, r = " << result;
        return true;
    } else if (operation == '/') {
        if (b == 0) {
            cout << "false";
            return false;
        } else {
            result = a / b;
            cout << "true, r = " << result;
            return true;
        }
    } else if (operation == '%') {
        if (b == 0){
            cout << "false";
            return false;
        } else{
            result = a % b;
            cout << "true, r = " << result;
            return true;
        }
    } else {
        cout << "false";
        return false;
    }
}

int main() {
    int r;
    
    calculate(7, 3, r);
    cout << endl;

    calculate(7, 3, r, '*');
    cout << endl;

    calculate(7, 3, r, '%');
    cout << endl;

    calculate(7, 3, r, '^');
    cout << endl;

    calculate(7, 0, r, '/');
    cout << endl;

}