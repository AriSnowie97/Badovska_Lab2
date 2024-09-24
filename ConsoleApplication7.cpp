#include <iostream>
using namespace std;

bool is_palindrome(int num) {
    int orignum = num;
    int reversnum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversnum = reversnum * 10 + digit;
        num /= 10;
    }
    return orignum == reversnum;
}

int main() {  
        while (true) {
            int num;
            cout << "Enter number: " << endl;
            cin >> num;
            if (is_palindrome(num)) {
                cout << "Palindrome" << endl;
            }
            else {
                cout << "Isn't Palindrome" << endl;
            }
        }
    return 0;
}
