

#include <iostream>
using namespace std;

char uppercase(char ch) {
    if (ch >= 'a' && ch <= 'z') { // checking if ch is a lowercase letter
        return ch - 32; // subtract 32 from the ASCII code of ch to convert it to uppercase
    }
    else { // ch is already uppercase or not a letter
        return ch; // return ch as is
    }
}

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "The uppercase is " << uppercase(c) << endl;
    return 0;
}


