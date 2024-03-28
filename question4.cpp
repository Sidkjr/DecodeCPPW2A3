#include <iostream>
using namespace std;
int n;

int main() {
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 4; i < n; i = i+3) {
        cout << i << ", ";
    }
    cout << "\n";
}