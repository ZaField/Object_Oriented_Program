#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}
    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

int main() {
    Point p(3, 4);
    cout << "Distance from Origin: " << p.distanceFromOrigin() << endl;
    return 0;
}
