#include <iostream>
using namespace std;

struct Rectangle {
    double length;
    double width;
};

double area(const Rectangle &r) {
    return r.length * r.width;
}

int main() {
    Rectangle rect = {4, 5};
    cout << "Rectangle Area: " << area(rect) << endl;
    return 0;
}
