#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // Very large numbers can cause integer overflow.
    return 0;
}