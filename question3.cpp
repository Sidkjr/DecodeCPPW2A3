#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the table number you want: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << "\n";
    }
}