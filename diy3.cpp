#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Length: " << name.length() << endl;
    if (name.length() > 10)
        cout << "It is a long name." << endl;
    else
        cout << "It is not a long name." << endl;
    return 0;
}