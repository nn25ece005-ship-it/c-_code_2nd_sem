#include <iostream>
#include <string>
using namespace std;
void upgrade(string &s) {
    s = s + " (verified)";
}
int main() {
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    upgrade(name);
    cout << name << endl;
    return 0;
}