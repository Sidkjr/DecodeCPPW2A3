#include <iostream>
using namespace std;
int n;

int main() {
    cout << "Enter the value for n: ";
    cin >> n;

    for (int i = 3; i < n; i = i * 4) {
        cout << i << ", ";
    }
    cout << "\n";
}