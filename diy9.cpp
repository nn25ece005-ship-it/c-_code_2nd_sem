#include <iostream>
#include <string>
using namespace std;
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Total characters: " << sentence.length() << endl;
    if (sentence.length() > 0) {
        cout << "First character: " << sentence[0] << endl;
        cout << "Last character: " << sentence[sentence.length() - 1] << endl;
    }
    return 0;
}