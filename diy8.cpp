#include <iostream>
using namespace std;
void minMax(int a, int b, int &small, int &big) {
    if (a < b) {
        small = a;
        big = b;
    }
    else {
        small = b;
        big = a;
    }
}
int main() {
    int a, b, small, big;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    minMax(a, b, small, big);
    cout << "Smallest: " << small << endl;
    cout << "Biggest: " << big << endl;
    return 0;
}