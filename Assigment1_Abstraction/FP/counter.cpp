#include <iostream>
using namespace std;

void increment(int &count) {
    count++;
}

int main() {
    int count = 0;
    increment(count);
    increment(count);
    cout << "Counter Value: " << count << endl;
    return 0;
}
