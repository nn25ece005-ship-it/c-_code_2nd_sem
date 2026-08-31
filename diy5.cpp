#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl;
    cout << "Total Length: " << fullName.length() << endl;
    cout << "Initials: " << firstName[0] << "." << lastName[0] << "." << endl;
    return 0;
}