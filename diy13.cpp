#include <iostream>
#include <string>
using namespace std;
int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (password == "password")
        cout << "Terrible password!" << endl;
    else if (password.length() < 6)
        cout << "Weak password" << endl;
    else if (password.length() <= 10)
        cout << "Medium password" << endl;
    else
        cout << "Strong password" << endl;
    return 0;
}