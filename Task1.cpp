#include <iostream>
using namespace std;

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    
    int lastDigit = num % 10;
    reversed = reversed * 10 + lastDigit;
    
    return reverseNumber(num / 10, reversed);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int reversed = reverseNumber(num, 0);
    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}
