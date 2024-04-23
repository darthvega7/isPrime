#include <iostream>
#include <cmath>

using namespace std;

void checkPrime(int num) {
    int divNum = 2;
    bool isDiv = false;
    if(num > 2) {
        for (int x = 2; x < ceil(sqrt(num)) + 1; x++) {
	    if(num % x == 0) {
	        isDiv = true;
                divNum = x;
		break;
            }
        }
    }
    if(isDiv) {
        cout << "Number is NOT prime. Divisible by " << divNum << endl;
    } else {
        cout << "Number is Prime." << endl;
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
