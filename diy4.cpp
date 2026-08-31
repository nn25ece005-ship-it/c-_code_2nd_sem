#include <iostream>
using namespace std;
int main() {
    int bill;
    cout << "Enter total bill: ";
    cin >> bill;
    int share = bill / 3;
    int leftover = bill % 3;
    cout << "Each person pays: Rs. " << share << endl;
    cout << "Leftover: Rs. " << leftover << endl;
    return 0;
}