#include <iostream>
using namespace std;
int a_int = 97;
int A_int = 65;

int main() {
    cout << "Uppercase alphabets with their ASCII characters: " << "\n";
    while(A_int <= 90) {
        cout << A_int << ": " << (char)A_int << "\n";
        A_int = A_int + 1;
    }

    cout << "\nLowercase alphabets with their ASCII character: " << "\n";
    while(a_int <= 122) {
        cout << a_int << ": " << (char)a_int << "\n";
        a_int = a_int + 1;
    }

    
}