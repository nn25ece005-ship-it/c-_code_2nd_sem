#include <iostream>
using namespace std;
void swapRef(int &a, int &b) { int t = a; a = b; b = t; }
void swapPtr(int *a, int *b) { int t = *a; *a = *b; *b = t; }
int main() {
int x = 10, y = 20;
swapRef(x, y);
cout << "After swapRef: x=" << x << " y=" << y << endl;
swapPtr(&x, &y);
cout << "After swapPtr: x=" << x << " y=" << y << endl;
int &alias = x;
alias = 99;
cout << "x via alias = " << x << endl;
}