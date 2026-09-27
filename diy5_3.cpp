#include <iostream>
using namespace std;

class Order {
    static int nextID;
    int id;
public:
    Order() { id = nextID++; }
    void show() { cout << "Order ID = " << id << endl; }
};

int Order::nextID = 1001;

int main() {
    Order a, b, c;
    a.show();
    b.show();
    c.show();
    return 0;
}