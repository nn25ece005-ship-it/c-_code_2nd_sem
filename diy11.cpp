#include <iostream>
using namespace std;
int main() {
    int amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    if (amount <= 0)
        cout << "Invalid amount" << endl;
    else if (amount > 10000)
        cout << "Amount exceeds limit" << endl;
    else if (amount % 500 != 0)
        cout << "Amount must be a multiple of 500" << endl;
    else
        cout << "Number of 500-rupee notes: " << amount / 500 << endl;
    return 0;
}