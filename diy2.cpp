#include <iostream>
using namespace std;
int main() {
    int marks, total;
    cout << "Enter marks scored: ";
    cin >> marks;
    cout << "Enter total marks: ";
       cin >> total;
    int percentage = (marks * 100) / total;
    cout << "Integer percentage: " << percentage << "%" << endl;
    float percentage2 = (marks * 100.0) / total;
    cout << "Decimal percentage: " << percentage2 << "%" << endl;
    return 0;
}