#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int biggest;
    if (a >= b && a >= c)
        biggest = a;
    else if (b >= a && b >= c)
        biggest = b;
    else
        biggest = c;
    cout << "Biggest number is: " << biggest << endl;
    // It takes 2 comparisons in the worst case.
    return 0;
}