#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    if (x == 0 || y == 0)
        cout << "On an axis" << endl;
    else if (x > 0 && y > 0)
        cout << "Quadrant I" << endl;
    else if (x < 0 && y > 0)
        cout << "Quadrant II" << endl;
    else if (x < 0 && y < 0)
        cout << "Quadrant III" << endl;
    else
        cout << "Quadrant IV" << endl;
    return 0;
}