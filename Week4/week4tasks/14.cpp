#include <iostream>
using namespace std;

void normalizeTime(int& hours, int& minutes, int& seconds) {
    minutes += seconds / 60;   // колко пълни минути има в seconds
    seconds = seconds % 60;    // какво остава

    hours += minutes / 60;     // колко пълни часа има в minutes
    minutes = minutes % 60;    // какво остава

    hours = hours % 24;      // връщане в рамките на денонощието
}

void printTime(int hours, int minutes, int seconds){
    if (hours < 10)
        cout << '0';

    cout << hours << ':';

    if (minutes < 10)
        cout << '0';
    
    cout << minutes << ':';

    if (seconds < 10)
        cout << '0';

    cout << seconds << endl;
}

int main() {

    int hours, minutes, seconds;
    cout << "Enter hours, minutes, and seconds: ";
    cin >> hours >> minutes >> seconds;

    normalizeTime(hours, minutes, seconds);
    printTime(hours, minutes, seconds);

}