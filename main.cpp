#include <iostream>

using namespace std;

int checkPrime(int number) {
    int divNumber = 2;
    bool isDiv = false;
    for(int x = 2; x < (number / 2 + 1); x++) {
        if(number % x == 0) {
            isDiv = true;
            divNumber = x;
            break;
        }
    }
    if(isDiv) {
        cout << "Number is NOT prime. Divisble by " << divNumber << endl;
    } else {
        cout << "Number IS Prime" << endl;
    }
}

int main()
{
    int num;
    while(true) {
        cout << "Enter a number: ";
        cin >> num;
        if(num < 2) {
            break;
        }
        checkPrime(num);
    }
    return 0;
}
