#include <iostream>
using namespace std;

int getLength(int number){

    number = abs(number);    
    int counter = 0;

    do{
        number /= 10;
        counter++;
    }while(number != 0);

    return counter;

}

int sumDigits(int& number){
    
    
while(number >= 10){

    int sum = 0;
        while (number > 0){
        
            sum+=number % 10;
            number /= 10;
            
        }
        number = sum;
}    
    return number;
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << sumDigits(number) << endl;
}