#include <iostream>
using namespace std;

class Time {
    int hh, mm;
public:
    Time(int h, int m) : hh(h), mm(m) {}
    friend Time laterOf(Time a, Time b);
    void show() { cout << hh << ":" << mm << endl; }
};

Time laterOf(Time a, Time b) {
    if (a.hh * 60 + a.mm > b.hh * 60 + b.mm)
        return a;
    return b;
}

int main() {
    Time t1(10, 30), t2(12, 15);
    laterOf(t1, t2).show();
    return 0;
}