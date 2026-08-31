#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, usn, branch;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter USN: ";
    cin >> usn;
    cout << "Enter branch: ";
    getline(cin,branch);
    cout << "\n----------------------\n";
    cout << "Name   : " << name << endl;
    cout << "USN    : " << usn << endl;
    cout << "Branch : " << branch << endl;
    cout << "----------------------\n";
    return 0;
}