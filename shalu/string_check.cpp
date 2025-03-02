#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello_World!";  // Example string
    string result;  // New string to store the result

    // Loop through each character in the string
    for (char ch : str) {
        // If the character is not 'o', add it to the result
        if (ch != 'o') {
            result += ch;
        }
    }

    cout << "The string after removing 'o' is: " << result << endl;

    return 0;
}