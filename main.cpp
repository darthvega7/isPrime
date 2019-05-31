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
        cout << "Number is NOT prime. Divisble by " << divNumber;
    } else {
        cout << "Number IS Prime";
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while(num != 0) {
        checkPrime(num);
        cout << endl << "Enter a number: ";
        cin >> num;
    }
    return 0;
}
