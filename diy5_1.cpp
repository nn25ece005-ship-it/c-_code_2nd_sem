#include <iostream>
using namespace std;

class Counter {
    static int created, alive;
public:
    Counter() { created++; alive++; }
    ~Counter() { alive--; }
    static void show() {
        cout << "Created = " << created << "\nAlive = " << alive << endl;
    }
};

int Counter::created = 0;
int Counter::alive = 0;

int main() {
    Counter a, b;
    Counter::show();
    return 0;
}