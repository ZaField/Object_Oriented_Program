#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};

int main() {
    Counter counter;
    counter.increment();
    cout << "Counter Value: " << counter.getCount() << endl;
    return 0;
}
