#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello_World!";  
    string result;  

   // store character of string in this ch variable
    for (char ch : str) {
      
        if (ch != 'o') {
            result += ch;
        }
    }

    cout << " o remove after string" << result << endl;

    return 0;
}
